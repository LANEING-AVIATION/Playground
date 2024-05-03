#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int num, n;
    std::cin >> num >> n;

    std::string num_str = std::to_string(num);
    std::rotate(num_str.begin(), num_str.begin() + n, num_str.end());

    while (num_str.length() < 5) {
        num_str = "0" + num_str;
    }

    std::cout << num_str << std::endl;

    return 0;
}

