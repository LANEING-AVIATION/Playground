#include<iostream>
using namespace std;
int main()
{	
	int n,i,j;
	char ch;
	cin>>n;
	ch='A';
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			cout<<"*";
		
		for (j = 0; j <= (n - i) * 2 - 2; j++) 

			cout<<(char)(ch+j);
		cout<<endl;
		ch = ch + 1; // 更新ch的值
	}
	return 0;
}

