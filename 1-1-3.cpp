#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  float x1,x2,y1,y2;
  double dist;
  cin >> x1 >> y1 >> x2 >> y2;
  dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));  
  cout << fixed ;
  cout<< setprecision(6) ;
  cout<<"d="<<dist;

  return 0;
}

