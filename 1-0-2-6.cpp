#include <iostream>
using namespace std;

int main() {
	int num, reversed_num = 0;

	cin >> num;

	while (num != 0) {
		reversed_num = reversed_num * 10 + num % 10;
		num /= 10;
	}

	cout << reversed_num << endl;
	return 0;
}

