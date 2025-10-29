#include <iostream>

int main() {
    int month;

    std::cout << "Input month: ";
    std::cin >> month;

    if (month < 1 || month > 12) {
        std::cout << "Invalid month." << std::endl;
    } else if (month == 2) {
        std::cout << "The month has 28 days." << std::endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // 小の月（30日まで）
        std::cout << "The month has 30 days." << std::endl;
    } else {
        // 大の月（31日まで）
        std::cout << "The month has 31 days." << std::endl;
    }

    return 0;
}
