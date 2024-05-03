#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_valid(const string& id) {
    vector<int> weights = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += (id[i] - '0') * weights[i];
    }
    int z = sum % 11;
    string valid_codes = "10X98765432";
    return id[17] == valid_codes[z];
}

int main() {
    int N;
    cin >> N;
    vector<string> ids(N);
    for (int i = 0; i < N; ++i) {
        cin >> ids[i];
    }

    bool all_passed = true;
    for (const string& id : ids) {
        if (!is_valid(id)) {
            cout << id << endl;
            all_passed = false;
        }
    }

    if (all_passed) {
        cout << "All passed" << endl;
    }

    return 0;
}

