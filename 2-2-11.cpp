#include <iostream>
using namespace std;

bool contains_unlucky_number(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 4) {
            return true;
        }
        int digitl = num % 100;
        if (digitl == 62) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int m, n;
    cin >> m >> n;
    int count = 0;
    for (int i = m; i <= n; i++) {
        if (!contains_unlucky_number(i)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

