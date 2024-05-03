#include <iostream>
#include <cstring>
using namespace std;

int main()
{	
    unsigned int i;
    char ch;
    char s1[1024];
    char s2[1024];
    cin.getline(s1, 1024);
    int count = 0;
    for(i=5;i>=1;i--)
    {
        s2[count++] = s1[strlen(s1)-i];
    }
    for(i=0;i<strlen(s1)-5;i++)
    {
        s2[count++] = s1[i];
    }
    s2[count] = '\0';
	
	for(i=0;i<strlen(s2);i++)
	{
		ch=s2[i];
		if('a'<=ch && ch<='z')
		{
			ch+=5;
			if(ch>'z')
				ch='a'+(ch-'z'-1);;
		}else{
			ch+=5;
			if(ch>'Z')
				ch='A'+(ch-'Z'-1);
		}
		s2[i]=ch;;
	} 
	cout<<s2;
	return 0;
} 


