#include <iostream>
using namespace std;

int main() {
    int n, s = 0, i = 1, v = 0;
    cin >> n;
    for (int K = 1; K <= n; K++) {
    	s=0;
    	i=1;
    	    for (int j = 1; j <= K; j++) {
		        s += i;
		        i++;
		    }
		v+=s;
    }
    cout << v << endl;
    return 0;
}

