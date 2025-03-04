// 实现命令行参数的输出和统计
// 在命令行输入：./test hello world(in vscode)
// 在命令行输入：!./test hello world(in vim)
// 输出：
// The command line has 2 arguments:
//  1 : ./test
//  2 : hello
//  3 : world
//
// 注意：./test是第一个参数，hello是第二个参数，world是第三个参数
#include <stdio.h>
int main(int argc, char *argv[])
{
    int count;
    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count <= argc; count++)
    {
        printf(" %d : %s\n", count, argv[count]);
    }
    printf("\n");
    return 0;
}
