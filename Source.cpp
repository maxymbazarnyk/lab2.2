// Lab_2.2.cpp // < Базарник Максим Степанович > // Лабораторна робота № 2.2. // Системи контролю версій. // Варіант 1 

#include <iostream> #include <cmath> 

using namespace std;

int main() {
    double Pi = 4 * atan(1.); // число пі
    double a;  // вхідний параметр     
    double z1; // результат обчислення 1-го виразу     
    double z2; // результат обчислення 2-го виразу 

    cout << "x = "; cin >> a;

    z1 = 2 * sin(3 * Pi - 2 * a) * sin(3 * Pi - 2 * a) * cos(5 * Pi + 2 * a) * cos(5 * Pi + 2 * a);
    z2 = 1. / 4 - 1. / 4 * sin(5. / 2 * Pi - 8 * a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
