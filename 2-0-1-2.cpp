#include<iostream>
using namespace std;
int main()
{
	int m,i,s=0;
	cin>>m;
	for(i = 2; i < m; i++)
	{
		if(m%i == 0)
		   s=s+i;		
	}
	cout<<s;
	
	return 0;
}

