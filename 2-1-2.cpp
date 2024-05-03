#include <iostream>
using namespace std;

int main()
{
    int m,n,r;
    cin>>m>>n;
    r=m<n?m:n;
    while(1)
    {
        if (m%r==0&& n % r == 0)
            break;
        r--;
    }
    cout<<"gcd="<<r<<endl;
    return 0;
}


