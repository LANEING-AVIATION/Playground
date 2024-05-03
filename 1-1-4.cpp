#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double price1,price2;
    int num1,num2;
    cin >> price1 >> num1;
    cin >> price2 >> num2;
    
    double total_price1 = price1 * num1;
    double total_price2 = price2 * num2;
    
    cout << setw(8) << fixed << setprecision(2) << price1 << setw(8) << num1 << setw(8) << total_price1<< endl;
    cout << setw(8) << fixed << setprecision(2) << price2 << setw(8) << num2 << setw(8) << total_price2;

    return 0;
}

