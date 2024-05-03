#include <iostream>
#include <cmath>
#include <iomanip>


int main() {
	using namespace std;
    double e;
    std::cin >> e;

    if (e < 0.000001) {
        std::cout << "e的值应大于等于0.000001" << std::endl;
        return 1;
    }

    double sum = 4/3;
    int n = 1;

    while (true) {
        double term = 1;
        for (int i = 1; i <= n; ++i) {
            term *= i;
        }
            //cout<<"n"<<term<<endl;
        double termx = 1;
        for (int i = 1; i <= n; i++) {
        	double numx = i*2+1;
            termx *= numx;
        }
            //cout<<"K"<<termx<<endl;
        double new_sum = sum + term / termx;
        if (abs(new_sum - sum)*4 < e) {
            break;
        }
        sum = new_sum;
        n++;
    }

    std::cout << n << " " << std::fixed << std::setprecision(7) << sum*2 << std::endl;
    return 0;
}

