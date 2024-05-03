#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> incomes;
    for (int i = 0; i < 7; ++i) {
        int income;
        std::cin >> income;
        incomes.push_back(income);
    }

    std::sort(incomes.begin(), incomes.end());

    int median = incomes[3];
    std::cout << median << std::endl;

    return 0;
}

