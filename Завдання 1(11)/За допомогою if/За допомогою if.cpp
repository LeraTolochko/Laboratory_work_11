#include <iostream>

int main() {
    int code;
    std::cout << "Enter product code: ";
    std::cin >> code;

    if (code == 1) {
        std::cout << "Price: 1000\nQuantity: 10\n";
    }
    else if (code == 2) {
        std::cout << "Price: 2000\nQuantity: 5\n";
    }
    else if (code == 3) {
        std::cout << "Price: 3000\nQuantity: 15\n";
    }
    else if (code == 4) {
        std::cout << "Price: 4000\nQuantity: 8\n";
    }
    else if (code == 5) {
        std::cout << "Price: 5000\nQuantity: 12\n";
    }
    else if (code == 6) {
        std::cout << "Price: 6000\nQuantity: 18\n";
    }
    else if (code == 7) {
        std::cout << "Price: 7000\nQuantity: 20\n";
    }
    else {
        std::cout << "Product not found.\n";
    }

    return 0;
}