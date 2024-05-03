#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    cin >> input;

    int count[26] = {0};
    for (char c : input) {
        if (isalpha(c)) {
            count[tolower(c) - 'a']++;
        }
    }

    int max_count = 0;
    char max_char = 'A';
    for (int i = 0; i < 26; i++) {
        if (count[i] > max_count || (count[i] == max_count && i < max_char - 'A')) {
            max_count = count[i];
            max_char = i + 'A';
        }
    }

    cout << max_char << endl;
    return 0;
}

