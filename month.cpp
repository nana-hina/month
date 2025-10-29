#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Input month: ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month." << endl;
    } else if (month == 2) {
        cout << "The month has 28 days." << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        // 小の月（30日まで）
        cout << "The month has 30 days." << endl;
    } else {
        // 大の月（31日まで）
        cout << "The month has 31 days." << endl;
    }

    return 0;
}
