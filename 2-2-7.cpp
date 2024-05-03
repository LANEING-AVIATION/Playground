#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
        	if (k<=i){
			    cout << char('A' + k - 1);	
			}else{
				cout<<char('A' + 2*i-k - 1);	
			}

        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
        	if (k<=i){
			    cout << char('A' + k - 1);	
			}else{
				cout<<char('A' + 2*i-k - 1);	
			}

        }
        cout << endl;
    }
    return 0;
}

