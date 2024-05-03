#include <iostream>
#include <iomanip>

int main() {
	double a, v;
	std::cin >> a >> v;
	double length = v * v / (2 * a);
	std::cout << std::fixed << std::setprecision(2) << length << std::endl;
	return 0;
}

