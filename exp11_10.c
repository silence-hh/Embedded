/**
 * @file exp11_10.c
 * @author silence (you@domain.com)
 * @brief to delete the space in the string
 * @version 0.1
 * @date 2025-03-04
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>
#include <string.h>
#define SIZE 50

char *space_del(char *str);

int main()
{
    char test_string[SIZE];
    char *position = NULL;
    printf("please enter the test string:\n");
    fgets(test_string, SIZE, stdin);
    while (*test_string != '\n')
    {
        position = space_del(test_string);
        printf("after deleting the string is:\n");
        printf("%s\n", position);
        printf("Another? you need to enter a new string (blank to quit):\n");
        fgets(test_string, SIZE, stdin);
    }
    return 0;
}

char *space_del(char *str)
{
    char *head = str; // 保存字符串的起始位置
    char *tail = str; // 用于构建没有空格的新字符串

    while (*str != '\0') // 遍历整个字符串，直到遇到字符串结束符 '\0'
    {
        if (*str != ' ')    // 如果当前字符不是空格
            *tail++ = *str; // 将当前字符复制到 tail 指针指向的位置，并将 tail 指针向后移动一位
        str++;              // 将 str 指针向后移动一位，继续检查下一个字符
    }
    *tail = '\0'; // 在新字符串的末尾添加字符串结束符 '\0'
    return head;  // 返回新字符串的起始位置
}
