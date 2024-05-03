#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int main() {
	std::ifstream infile("text1.dat");
	std::ofstream outfile("text2.dat");
	std::string line;

	if (!infile.is_open()) {
		std::cerr << "无法打开输入文件" << std::endl;
		return 1;
	}

	if (!outfile.is_open()) {
		std::cerr << "无法打开输出文件" << std::endl;
		return 1;
	}

	while (std::getline(infile, line)) {
		std::reverse(line.begin(), line.end());
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();

	return 0;
}

