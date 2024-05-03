#include <iostream>
using namespace std;

int main()
{	
	double sum,an;
	int i=1,n;
	cin>>n;
	if(n<1)
	{
	    printf("Input error,end.\n");
	    return 1;
	}          
	sum=0.0;
	do{	
		an = i/2;
		sum+=an;
		i++;    
	}while(i / 2 <= (n * 2 + 1) / 2);
	cout<<"sum="<<sum<<endl;      
	return 0;
}

  


