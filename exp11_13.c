// achieve the flashback of the input arguments
#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc < 2)
        printf("error: no arguments\n");
    else
        for (int i = argc; i > 0; i--)
        {
            printf("%s\n", argv[i - 1]);
        }
    return 0;
}
