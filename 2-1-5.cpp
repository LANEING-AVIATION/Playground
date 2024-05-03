#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n;
    float t;
    float a=2,b=1,s=0;
    cin>>n;
    for (i = 1; i <= n; i++)
        {
            t = a / b;
            s += t;
            a += b;
            b = a - b;
        }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<s<<endl;
    return 0;
}

