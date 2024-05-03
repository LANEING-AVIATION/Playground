#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    int s = 0;
    int v = 0;
    for (int i = 1; i <= n; i++) {
        int temp = a;
        for (int j = 1; j < i; j++) {
            temp *= 10;
        }
        s += temp;
        v += s;
    }
    cout << v << endl;
    return 0;
}

