#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 20
int myAutoi(char *str);
int main()
{
    char inPstr[SIZE];
    printf("enter a number in it:\n");
    scanf("%s",inPstr);
    printf("you input int is:%d\n",myAutoi(inPstr));
    return 0;
}
int myAutoi(char *str)
{
    int result = 0;
    int bit_mark=1;
    int length = strlen(str);
    for(int i = length;i>0;i--)
    {
        if(isdigit(*(str+i-1))==0)
        {
            printf("error you enter char.\n");
            return 0;
        }
        result+=(*(str+i-1)-'0')*bit_mark;//减去‘0’是为了将字符转换为数字
        /*
        字符'1'的ASCII码是49，'1' - '0' = 49 - 48 = 1
        字符'2'的ASCII码是50，'2' - '0' = 50 - 48 = 2*/
        bit_mark*=10;
    }
    return result;
}


