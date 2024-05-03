#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long int fac(int n);
    int n,m;
    cin>>n>>m;
    if (n>m)
        cout<<fac(n) / (fac(n - m) * fac(m))<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}

long int fac(int n)
{
    long int i,fact=1;
    for(i=1;i<=n;i++)
        fact*=i;
    return fact;;
}


