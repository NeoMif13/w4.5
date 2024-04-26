#pragma once

class Vector
{
private:
    int* elements;
    int size;

public:
    // Конструкторы
    Vector();
    Vector(int size);
    Vector(const Vector& other);
    Vector(Vector&& other);

    // Деструктор
    ~Vector();

    // Методы
    void setSize(int size);                        // Задать размерность вектора                          //*
    int getSize() const;                           // Получить размерность вектора                        //*
    int getElement(int index) const;               // Получить элемент вектора по индексу                 //*
    void setElement(int index, int value);         // Задать значение элемента вектора по индексу         //*
    void addScalar(int scalar);                    // Сложить все элементы вектора с скаляром             //*
    void subtractScalar(int scalar);               // Вычесть из всех элементов вектора скаляр            //*
    // Умножить все элементы вектора на скаляр
    template <typename T>
    Vector operator*(T scalar) const
    {
        Vector result(size);
        for (int i = 0; i < size; i++) {
            result.elements[i] = elements[i] * scalar;
        }
        return result;
    }
                                                   // Умножить все элементы вектора на скаляр             //*
    void divideByScalar(int scalar);               // Разделить все элементы вектора на скаляр            //*
    double getLength() const;                      // Получить длину вектора                              //*
    void addVector(const Vector& other);           // Поэлементное сложение с другим вектором             //*
    void subtractVector(const Vector& other);      // Поэлементное вычитание другого вектора              //*
    void multiplyByVector(const Vector& other);    // Поэлементное умножение на другой вектор             //*
    void divideByVector(const Vector& other);      // Поэлементное деление на другой вектор               //*  
    void print() const;                            // Вывод значений элементов вектора на экран           //*
    void input();                                  // Ввод значений элементов вектора с клавиатуры        //*
    void fillRandom();                             // Заполнение элементов вектора случайными числами     //*
};

// Реализация независимой внешней функции
template <typename T>
Vector operator*(const Vector& vector, T scalar)
{
    Vector result(vector);
    for (int i = 0; i < result.getSize(); i++) {
        result.setElement(i, result.getElement(i) * scalar);
    }
    return result;
}