#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream infile("in.txt");
	int line_count = 0;
	string line;

	while (getline(infile, line)) {
		line_count++;
	}

	cout << line_count << endl;

	infile.close();
	return 0;
}

