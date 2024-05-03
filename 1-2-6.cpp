#include <iostream>
using namespace std;

int main() {
	int num, reverse_num = 0;
	cin >> num;

	while (num != 0) {
		reverse_num = reverse_num * 10 + num % 10;
		num /= 10;
	}

	cout << reverse_num << endl;
	return 0;
}

