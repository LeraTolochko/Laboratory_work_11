#include <iostream>

int main() {
    int code;
    std::cout << "Enter product code: ";
    std::cin >> code;

    switch (code) {
    case 1:
        std::cout << "Price: 1000\nQuantity: 10\n";
        break;
    case 2:
        std::cout << "Price: 2000\nQuantity: 5\n";
        break;
    case 3:
        std::cout << "Price: 3000\nQuantity: 15\n";
        break;
    case 4:
        std::cout << "Price: 4000\nQuantity: 8\n";
        break;
    case 5:
        std::cout << "Price: 5000\nQuantity: 12\n";
        break;
    case 6:
        std::cout << "Price: 6000\nQuantity: 18\n";
        break;
    case 7:
        std::cout << "Price: 7000\nQuantity: 20\n";
        break;
    default:
        std::cout << "Product not found.\n";
    }

    return 0;
}