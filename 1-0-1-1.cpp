#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b;
	    cin >> a >> b;
	    if (b != 0) {
	        double result = static_cast<double>(a) / b;
	        cout << fixed << setprecision(6) << result << endl;
	    }
	    else {
	        cout << "除数不能为0" << endl;
	    }
	return 0;
}

