#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cin >> k;
    int arr2[k];
    for (int b = 0; b < k; b++) {
        cin >> arr2[b];
    }
    int merged_arr[n + k];
    merge(arr1, arr1 + n, arr2, arr2 + k, merged_arr);
    std::sort(merged_arr, merged_arr + n+k);
    ofstream out("out.dat", ios::binary);
    for (int i = 0; i < n + k; i++) {
        out.write(reinterpret_cast<char*>(&merged_arr[i]), sizeof(merged_arr[i]));
    }
    out.close();
    return 0;
}

