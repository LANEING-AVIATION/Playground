#include<iostream>
#include<iomanip>
using namespace std;
void reverse(int n)
{
	if(n<10)
	  cout<<n;
	else
	  {
	  	cout<<n%10;
	  	reverse(n/10);;
	  }
}

int main()
{
	int num;
	cin>>num;
	reverse(num);
        return 0;
}

