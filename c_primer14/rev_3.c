#include <stdio.h>
#define N 12

typedef struct Month
{
    char name[N];
    char abr_name[N];
    int days;
} Month;

void in_struct(Month sum_day[], int n);
int cal_days(Month sum_day[], int number);
void print_struct(Month sum_day[], int n);

int main()
{
    Month sum_day[N];
    int month;
    int allDays;

    printf("Now, let's to enter these information.\n");
    in_struct(sum_day, N);
    printf("please enter a month :\n");
    scanf("%d", &month);
    getchar(); // 清除换行符
    printf("your enter month is %d\n", month);
    print_struct(sum_day, month);
    allDays = cal_days(sum_day, month);
    printf("these days is %d.", allDays);
    return 0;
}

void in_struct(Month sum_day[], int n)
{
    int i;
    for (i = 0; i < 3; i++) // 修改循环条件
    {
        printf("please enter %d element.\n", i + 1);
        printf("Enter month name:\n");
        fgets(sum_day[i].name, n, stdin);
        printf("Enter abbreviated name:\n ");
        fgets(sum_day[i].abr_name, n, stdin);
        printf("Enter days:\n");
        scanf("%d", &sum_day[i].days);
        getchar(); // 清除换行符

        if (i == 2)
        {
            printf("the last input.\n");
            break;
        }
    }
}

int cal_days(Month sum_day[], int number)
{
    int i;
    int allDays = 0;
    for (i = 0; i < number; i++) // 修改循环条件
    {
        allDays += sum_day[i].days;
    }
    return allDays;
}
void print_struct(Month sum_day[], int n)
{
    printf("the month name is %s\n", sum_day[n - 1].name);
    printf("the abbreviated name is %s\n", sum_day[n - 1].abr_name);
    printf("the days is %d\n", sum_day[n - 1].days);
}
