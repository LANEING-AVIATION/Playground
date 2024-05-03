#include<iostream>
using namespace std;

int f(int x); 

int main()
{ 
    int x,y;
    cin>>x;
    y=f(x); 
    cout<<y;
    return 0;
}

int f(int x)
{ 
    int y;
    if(x<=0)
        y=0;
    else if(x<50) 
        y=x;
    else if(x>=50&&x<100)
        y=2*x*x-1; 
    else  if(x>=100&&x<1024)
        y=x*x*x-2;
    else
        y=1;
    return y;
}

