#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, n;
	cin >> a >> n;
	int s = 0;
	for (int i = 1; i <= n; ++i) {
		s += a * pow(10, i - 1) * (n - i + 1);
	}
	cout << s << endl;
	return 0;
}

