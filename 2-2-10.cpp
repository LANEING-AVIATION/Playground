#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int data1, data2;
    char op;
    cin >> data1 >> data2 >> op;

    switch (op) {
        case '+':
            cout << data1 + data2 << endl;
            break;
        case '-':
            cout << data1 - data2 << endl;
            break;
        case '*':
            cout << data1 * data2 << endl;
            break;
        case '/':
            if (data2 == 0) {
                cout << "error" << endl;
            } else {
                if (data1 % data2 == 0) {
                    cout << data1 / data2 << endl;
                } else {
                    cout << fixed << setprecision(2) << static_cast<double>(data1) / data2 << endl;
                }
            }
            break;
        default:
            cout << "error" << endl;
            break;
    }

    return 0;
}

