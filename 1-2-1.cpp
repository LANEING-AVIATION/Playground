#include <iostream>
using namespace std;

int main() {
	char num1, num2;
	cin >> num1 >> num2;
	int sum = num1 - '0' + num2 - '0';
	cout << sum << endl;
	return 0;
}

