#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double price1,price2;
    int num1,num2;
       cin >> price1 >> num1;
       cin >> price2 >> num2;
       double total1 = price1 * num1;
       double total2 = price2 * num2; 
       cout << setw(8) << right << fixed << setprecision(2) << price1 << setw(8) << right << fixed << setprecision(2) << num1 << setw(8) << right << fixed << setprecision(2) << total1<<endl;
       cout << setw(8) << right << fixed << setprecision(2) << price2 << setw(8) << right << fixed << setprecision(2) << num2 << setw(8) << right << fixed << setprecision(2) << total2;

    return 0;
}

