#include <iostream>
#include <iomanip>
#include<cstring>
#include<cmath>
using namespace std;
int findnum(int *p,int x,int n);
int main()
{	int a[10],cnt,x;
	for(int n=0;n<10;n++)
		cin>>a[n];
	cin>>x;
	cnt=findnum(a,x,10);
	cout<<cnt;
	return 0;
}
int findnum(int *p,int x,int n)
{	int t,sum=0;    
	for(t=0;t<n;t++)
	    if(x==*(p+t)) 
	    {	sum++;
	    	break;
		} 
	p = p + t + 1;
	for(int j=t+1;j<n;j++)
	{	if(x==*p)
			sum++;
		p++;		 
	}	    
	return sum;
}

