#include <iostream>
#include<iomanip>
using namespace std;
double SumEven(int n);
double SumOdd(int n); 
int main()
{	int n;
    double sum;
	double (*funp)(int);
	cin>>n;
	if(n%2==1)
    	  funp=SumOdd;
	else
    	  funp=SumEven;	     
	sum = funp(n);
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<sum;
	return 0;
}
double SumOdd(int n)
{ double s=0; 
  for(int k=1;k<=n;k+=2)
     s=s+1.0/k;
  return s;
}
double SumEven(int n)
{ double s=1; 
  for(int k=2;k<=n;k+=2)
     s=s+1.0/k;
 return s;
}

