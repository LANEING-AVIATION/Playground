#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x;
    cin >> x;
    double y;

    if (x >= -10 && x <= 10) {
        y = abs(2 * x - 5);
    } else if (x > 10 && x <= 20) {
        y = pow(x, 3);
    } else if (x > 25 && x <= 35) {
        y = x / 2 + 10;
    } else {
        cout << "No answer." << endl;
        return 0;
    }

    cout << fixed << setprecision(2) << "y=" << y << endl;
    return 0;
}

