#include  <iostream>
using namespace std;

int main()
{
    long int x,y,r=0;
    int i;
    cin>>x;
    y=x;
    for(i=0;y!=0;i++)
    {
    	r*=10;
        r+=y%10;
        y/=10;
    }
    if(x==r)
        cout<<x<<"是回文数\n";
    else
        cout<<x<<"不是回文数\n";
    return 0;
}

