#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int arr[3] = {x, y, z};
    sort(arr, arr + 3);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    return 0;
}

