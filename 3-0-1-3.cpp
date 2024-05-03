#include <iostream>
using namespace std;

double getArea(double r,double pi=3.1415)
{
	return pi*r*r;
}

int main()
{
	double r,pi,area;
	cin>>r>>pi;
	if(pi<0)
		area=getArea(r);
	else
		area = getArea(r,pi);;
	cout.precision(6);
	cout.setf(ios::fixed|ios::showpoint);
	cout<<area;
	return 0;
}

