#include <iostream>
using namespace std;

int getMax(int a, int b, int c, int d) 
{
	int x,y;
	x=a>b ? a : b;
	y=c>d ? c : d;
	return x>y ? x : y;
}

int getMax(int a, int b, int c) 
{
	int x;
	x=a>b ? a : b;
	return x>c ? x : c;
}

int getMax(int a, int b) 
{
	return a>b ? a : b;
}

int main()
{
	int i,j,k,m,n;
	cin>>i;
	if(i==2){
		cin>>j>>k;
		cout<<getMax(j,k);
	}else if(i==3){
		cin>>j>>k>>m;
		cout<<getMax(j,k,m);
	}else if(i==4){
		cin>>j>>k>>m>>n;
		cout<<getMax(j,k,m,n);
	}
	return 0;
}

