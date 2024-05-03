#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a, v, x0;
	cin >> a >> v >> x0;
	double length = v * v / (2 * a) + x0;
	cout << fixed << setprecision(2) << length << endl;
	return 0;
}

