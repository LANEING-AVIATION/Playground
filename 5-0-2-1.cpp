#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // ��������˫���ȱ������ֱ�洢�����߳�
    double a, b, c;

    // �ж������в����Ƿ�Ϊ3�����������"Non triangle."���˳�����
    if (argc != 4)
    {
        printf("Non triangle.\n");
        return 0;
    }

    // �������в���ת��Ϊ˫������ֵ������ֵ����Ӧ�ı���
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);

    // �ж��������Ƿ��������ǲ���ʽ������������֮�ʹ��ڵ�����
    if (a + b > c && a + c > b && b + c > a)
    {
        // ������㣬���㲢��������ε��ܳ�
        double perimeter = a + b + c;
        printf("Perimeter of triangle:%f\n", perimeter);
    }
    else
    {
        // ��������㣬���"Non triangle."
        printf("Non triangle.\n");
    }

    return 0;
}

