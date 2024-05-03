#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double total_distance = 0;
    for (int i = 1; i <= m; i++) {
        total_distance += n;
        n *= 0.75;
    }
    cout << fixed << setprecision(2) << total_distance << endl;
    cout << fixed << setprecision(2) << n << endl;
    return 0;
}

