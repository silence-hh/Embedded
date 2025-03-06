#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("error, can't calculate it\n");
        return 0;
    }

    // 调试信息：打印输入参数
    printf("Base number: %s\n", argv[1]);
    printf("Power number: %s\n", argv[2]);

    float base_num = atof(argv[1]);
    int power_num = atoi(argv[2]);

    // 调试信息：打印转换后的数值
    printf("Base number (float): %f\n", base_num);
    printf("Power number (int): %d\n", power_num);

    float result = pow(base_num, power_num);

    // 调试信息：打印计算结果
    printf("The result: %f\n", result);

    return 0;
}
