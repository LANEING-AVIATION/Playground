#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;
void mycount(int a[],int b[],int n);
int main()
{	int a[100],b[5]={0},i,x;
	i=0;
	cin>>x;
	while(x>0&&x<=5)
	{	a[i]=x;
		b[a[i]-1]++; // 统计得票数
		cin>>x;
	}
	mycount(a,b,i);
	for(i=0;i<5;i++)
		cout<<i+1<<"---"<<b[i]<<endl;
	return 0;
}
void mycount(int a[],int b[],int n)
{	for(int i=0;i<n;i++)
		b[a[i]-1]++; // 统计得票数
}

