#include<iostream>
#include<iomanip>
using namespace std;

int main()
{	
    double sum,an;
    int i=1,n,k;
    cin>>n; 
    if(n<1)
    {
        cout<<"Input error,end."; 
        return 1;
    }          
    sum=0.0;
    k=1;
    while(i<=n)
    {	
        k = (i % 2 == 0) ? -1 : 1;
        double q = i * 1.000;
        an = 1 / (q * 2 - 1);
        sum+=an*k;
        i++;		  
    }
    cout<<setiosflags(ios::fixed)<<setprecision(6)<<"sum="<<sum<<endl;      
    return 0;
}

  


