#include<iostream>
using namespace std;
int main()
{
	int m=1;
	while(1)
	{
		if((m%5==1)&&(m%6==5)&&(m%7==4)&&(m%11==10))
		{
			break;
		}
		else
		    {m++;
    		continue;
    		}
	}
	cout<<m;
	
	return 0;
}

