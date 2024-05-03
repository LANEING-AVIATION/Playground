#include <iostream>

int main() {
	// 声明两个字符变量来存储用户的输入
	char num1, num2;

	// 从键盘获取两个字符输入
	std::cin >> num1 >> num2;

	// 将字符转换为整数
	int n1 = num1 - '0';
	int n2 = num2 - '0';

	// 计算和打印数字之和
	int sum = n1 + n2;
	std::cout << sum << std::endl;

	return 0;
}

