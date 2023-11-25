#include <iostream>


bool isInShadedArea(int x, int y) {
    if (x > 0 && y > 0 && y < x) {
        return true;
    }
    return false;
}

int main() {
    int x, y;
    std::cout << "Enter the x coordinate: ";
    std::cin >> x;
    std::cout << "Enter the y coordinate: ";
    std::cin >> y;

    if (isInShadedArea(x, y)) {
        std::cout << "The point lies in the shaded area." << std::endl;
    }
    else {
        std::cout << "The point does not lie in the shaded area." << std::endl;
    }

    return 0;
}