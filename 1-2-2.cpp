#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double debt, annual_interest_rate;
	cin >> debt >> annual_interest_rate;

	double monthly_interest = debt * (annual_interest_rate / 1200);
	cout << fixed << setprecision(3) << monthly_interest << endl;

	return 0;
}

