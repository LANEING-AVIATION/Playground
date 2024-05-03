#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool found = false;
    for (int A = 1; A < 10; ++A) {
        for (int B = A + 1; B < 10; ++B) {
            int AB = A * 10 + B;
            int BA = B * 10 + A;
            if (AB * BA == N) {
                cout << A << B << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        cout << "No" << endl;
    }
    return 0;
}

