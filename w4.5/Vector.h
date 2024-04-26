#pragma once

class Vector
{
private:
    int* elements;
    int size;

public:
    // ������������
    Vector();
    Vector(int size);
    Vector(const Vector& other);
    Vector(Vector&& other);

    // ����������
    ~Vector();

    // ������
    void setSize(int size);                        // ������ ����������� �������                          //*
    int getSize() const;                           // �������� ����������� �������                        //*
    int getElement(int index) const;               // �������� ������� ������� �� �������                 //*
    void setElement(int index, int value);         // ������ �������� �������� ������� �� �������         //*
    void addScalar(int scalar);                    // ������� ��� �������� ������� � ��������             //*
    void subtractScalar(int scalar);               // ������� �� ���� ��������� ������� ������            //*
    // �������� ��� �������� ������� �� ������
    template <typename T>
    Vector operator*(T scalar) const
    {
        Vector result(size);
        for (int i = 0; i < size; i++) {
            result.elements[i] = elements[i] * scalar;
        }
        return result;
    }
                                                   // �������� ��� �������� ������� �� ������             //*
    void divideByScalar(int scalar);               // ��������� ��� �������� ������� �� ������            //*
    double getLength() const;                      // �������� ����� �������                              //*
    void addVector(const Vector& other);           // ������������ �������� � ������ ��������             //*
    void subtractVector(const Vector& other);      // ������������ ��������� ������� �������              //*
    void multiplyByVector(const Vector& other);    // ������������ ��������� �� ������ ������             //*
    void divideByVector(const Vector& other);      // ������������ ������� �� ������ ������               //*  
    void print() const;                            // ����� �������� ��������� ������� �� �����           //*
    void input();                                  // ���� �������� ��������� ������� � ����������        //*
    void fillRandom();                             // ���������� ��������� ������� ���������� �������     //*
};

// ���������� ����������� ������� �������
template <typename T>
Vector operator*(const Vector& vector, T scalar)
{
    Vector result(vector);
    for (int i = 0; i < result.getSize(); i++) {
        result.setElement(i, result.getElement(i) * scalar);
    }
    return result;
}