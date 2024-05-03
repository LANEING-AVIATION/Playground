#include <iostream>
using namespace std;

class Column
{
	double r;
	double h;
public:
	Column(double radius, double height) : r(radius), h(height) {}
	double getArea();
	double getCubage();
};
double Column::getArea()
{
	double surfaceArea = 2 * 3.1415926 * r * r + 2 * 3.1415926 * r * h;
	return surfaceArea;
}
double Column::getCubage()
{
	double cubage = 3.1415926 * r * r * h;
	return cubage;
}
int main()
{
	double r1,h1;

	cin>>r1>>h1;
	Column c1(r1,h1);
	cout<<c1.getArea() << " " <<c1.getCubage();
	return 0;
}


