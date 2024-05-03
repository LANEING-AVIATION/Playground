#include<iostream>
using namespace std;

int main()
{	
    double sum,an;
    int i=1,n;
    cin>>n; 
    if(n<1)
    {
        cout<<"Input error,end."<<endl; 
        return 1;
    }          
    sum=0.0;
    do{	
        an = i / 2;
        sum += an;
        i++;
        sum+=an;
        i++;    
    }while(i / 2 <= (n * 2 + 1) / 2);
    printf("sum=%lf\n",sum);        
    return 0;
}

