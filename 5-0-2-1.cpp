#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // 定义三个双精度变量，分别存储三条边长
    double a, b, c;

    // 判断命令行参数是否为3个，否则输出"Non triangle."并退出程序
    if (argc != 4)
    {
        printf("Non triangle.\n");
        return 0;
    }

    // 将命令行参数转换为双精度数值，并赋值给对应的变量
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);

    // 判断三条边是否满足三角不等式，即任意两边之和大于第三边
    if (a + b > c && a + c > b && b + c > a)
    {
        // 如果满足，计算并输出三角形的周长
        double perimeter = a + b + c;
        printf("Perimeter of triangle:%f\n", perimeter);
    }
    else
    {
        // 如果不满足，输出"Non triangle."
        printf("Non triangle.\n");
    }

    return 0;
}

