#include <iostream>

int main() {
	// ���������ַ��������洢�û�������
	char num1, num2;

	// �Ӽ��̻�ȡ�����ַ�����
	std::cin >> num1 >> num2;

	// ���ַ�ת��Ϊ����
	int n1 = num1 - '0';
	int n2 = num2 - '0';

	// ����ʹ�ӡ����֮��
	int sum = n1 + n2;
	std::cout << sum << std::endl;

	return 0;
}

