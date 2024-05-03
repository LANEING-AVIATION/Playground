#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int A = 1, B = 2, Q = 12, M = 21;
	for (A = 1; A <= 9; A++) {
		for (B = 9; B >= A; B--) {
			Q = A * 10 + B;
			M = B * 10 + A;
			if (Q * M == N) {
				cout << Q;
				return 0;
			}
		}

	}
	cout << "No" << endl;
	return 0;
}

