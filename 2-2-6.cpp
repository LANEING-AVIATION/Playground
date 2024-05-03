#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

string getSeason(int month) {
    if (month >= 3 && month <= 5) {
        return "Spring";
    } else if (month >= 6 && month <= 8) {
        return "Summer";
    } else if (month >= 9 && month <= 11) {
        return "Fall";
    } else {
        return "Winter";
    }
}

int main() {
    int year, month;
    cin >> year >> month;

    string result = isLeapYear(year) ? "Leap year" : "Common year";
    cout << result << "," << getSeason(month) << endl;

    return 0;
}

