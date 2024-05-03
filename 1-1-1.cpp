#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b;
	std::cin >> a >> b;
	double result = static_cast<double>(a) / b;
	std::cout << std::fixed << std::setprecision(6) << result << std::endl;
	return 0;
}

