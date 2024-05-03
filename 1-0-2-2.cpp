#include <iostream>
#include <iomanip>

int main() {
	double debt, annual_interest_rate;
	std::cin >> debt >> annual_interest_rate;

	double monthly_interest = debt * (annual_interest_rate / 1200);
	std::cout << std::fixed << std::setprecision(3) << monthly_interest << std::endl;

	return 0;
}

