#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const int N = 5;
    Vector X(N);
    Vector Y(N);
    Vector Z(N);

    X.fillRandom();
    Y.fillRandom();
    cout << "X: ";
    X.print();
    cout << "Y: ";
    Y.print();



    int a = 3;
    int b = 1;

    for (int i = 0; i < N; i++)
    {
        int xi = X.getElement(i);
        int yi = Y.getElement(i);
        int zi = a * xi - b * yi;
        Z.setElement(i, zi);
    }

    cout << "Z: ";
    Z.print();

    // Получение размерности вектора
    int sizeX = X.getSize();
    int sizeY = Y.getSize();
    cout << " размерности вектора X: " << sizeX << endl;
    cout << " размерности вектора Y: " << sizeY << endl;

    // Получение элемента вектора по индексу
    int x0 = X.getElement(1);
    int y0 = Y.getElement(0);
    cout << "элемент вектора по индексу 1 in X: " << x0 << endl;
    cout << "элемент вектора по индексу 0 in Y: " << y0 << endl;

    // Задание значения элемента вектора по индексу
    cout << "Задание значения элемента вектора по индексу " << endl;


    Vector X0(X);
    Vector Y0(Y);
    X0.setElement(1, 10);
    Y0.setElement(1, 12);
    cout << " X(1, 10): ";
    X0.print();
    cout << " Y(1, 12): ";
    Y0.print();

    // Сложение всех элементов вектора X с скаляром
    Vector X1(X);
    X1.addScalar(5);
    cout << "X после скаляра + : ";
    X1.print();

    // Вычитание из всех элементов вектора Y скаляра
    Vector Y1(Y);
    Y1.subtractScalar(3);
    cout << "Y  после скаляра - : ";
    Y1.print();

    // Method approach
    Vector X7 = X * 2;
    cout << "X * 2 (method approach): ";
    X7.print();

    // Independent external function approach
    Vector Y6 = operator*(Y, 3);
    cout << "Y * 3 (independent external function approach): ";
    Y6.print();

    // Деление всех элементов вектора Y на скаляр
    Vector Y2(Y);
    Y2.divideByScalar(2);
    cout << "Y  после скаляра / : ";
    Y2.print();

    // Получение длины вектора X
    double lengthX = X.getLength();
    cout << "длины вектора X: " << lengthX << endl;


    //Поэлементное сложение векторов X и Y
    Vector X3(X);
    Vector Y3(Y);
    X3.addVector(Y3);
    cout << " = X + Y: ";
    X3.print();

    // Поэлементное вычитание векторов X и Y
    Vector X4(X);
    Vector Y4(Y);
    X4.subtractVector(Y4);
    cout << " = X - Y: ";
    X4.print();

    // Поэлементное умножение векторов X и Y
    Vector X5(X);
    Vector Y5(Y);
    X5.multiplyByVector(Y5);
    cout << " = X * Y: ";
    X5.print();

    //   Поэлементное деление векторов X и Y

    X.divideByVector(Y);
    cout << " = X / Y: ";
    X.print();

    int size;
    cout << "Размер: ";
    cin >> size;

    Vector v(size);

    v.input();

    cout << "Размерность: " << v.getSize() << endl;

    cout << "Вектор: " << endl;
    v.print();

    return 0;
}
