#include <iostream>
#include <vector>
#include <cmath>

// Функція для знаходження кількості пар «сусідніх» чисел ai, рівних нулю (задача 1)
int countZeroPairs(int n, std::vector<int>& arr) {
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == 0 && arr[i + 1] == 0) {
            count++;
        }
    }
    return count;
}

// Функція для перевірки, чи число є простим (задача 2)
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Функція для знаходження всіх тризначних простих чисел (задача 2)
void findThreeDigitPrimes() {
    std::cout << "All three-digit prime numbers:\n";
    for (int i = 100; i <= 999; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

// Функція для знаходження кількості способів виплати суми k грн (задача 3)
int countWaysToPay(int k) {
    std::vector<int> coins = { 1, 2, 5, 10 };
    std::vector<int> dp(k + 1, 0);
    dp[0] = 1;
    for (int coin : coins) {
        for (int j = coin; j <= k; ++j) {
            dp[j] += dp[j - coin];
        }
    }
    return dp[k];
}

int main() {
    int choice;
    do {
        std::cout << "Select a task number (1, 2 or 3) (enter 0 to exit): ";
        std::cin >> choice;

        switch (choice) {
        case 0:
            std::cout << "The program is complete.\n";
            break;
        case 1: {
            int n;
            std::cout << "Enter the number of numbers n: ";
            std::cin >> n;
            std::vector<int> numbers(n);
            std::cout << "Enter " << n << " numbers:\n";
            for (int i = 0; i < n; ++i) {
                std::cin >> numbers[i];
            }
            int zeroPairs = countZeroPairs(n, numbers);
            std::cout << "The number of pairs of adjacent numbers equal to zero: " << zeroPairs << std::endl;
            break;
        }
        case 2:
            findThreeDigitPrimes();
            break;
        case 3: {
            int k;
            std::cout << "Enter the amount k UAH: ";
            std::cin >> k;
            int ways = countWaysToPay(k);
            std::cout << "Number of payment methods " << k << " UAH: " << ways << std::endl;
            break;
        }
        default:
            std::cout << "Wrong choice. Please select the task number again.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}