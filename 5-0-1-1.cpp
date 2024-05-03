#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

#define N 4
int HexToDec(char *p);
int main()
{
	int x;
	char a[N + 1];
	cin>>a;
	x = HexToDec(a);
	cout<<x;
}
int HexToDec(char *p) 
{	
	    
	    int result = 0;
	    for (int i = 0; p[i] != '\0'; i++) {
	        if (p[i] >= '0' && p[i] <= '9') {
	            result = result * 16 + (p[i] - '0');
	        } else if (p[i] >= 'A' && p[i] <= 'F') {
	            result = result * 16 + (p[i] - 'A' + 10);
	        }
	    }
	    return result;
		
}

