#include <iostream>

int main() {
    int a, b, z;

    // Введення значень для змінних a та b
    std::cout << "Enter a value for the variable a: ";
    std::cin >> a;

    std::cout << "Enter a value for the variable b: ";
    std::cin >> b;

    // Обчислення значення змінної z
    z = a + b;

    // Виведення результату
    std::cout << "The value of the variable z = " << z << std::endl;

    return 0;
}