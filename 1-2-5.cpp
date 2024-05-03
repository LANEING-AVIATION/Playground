#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double r, h;
	cin >> r >> h;
	double volume = 3.1415926 * r * r * h;
	double surface_area = 2 * 3.1415926 * r * (r + h);
	cout << fixed << setprecision(4) << volume << "," << surface_area << endl;
	return 0;
}

