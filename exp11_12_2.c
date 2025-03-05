#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    char c;
    bool inword = false;
    int in_words, uppercase, lowercase, interpunction, digit;
    in_words = uppercase = lowercase = interpunction = digit = 0;
    printf("please enter character:\n");
    while ((c = getchar()) != EOF)
    {
        if (isupper(c))
            uppercase++;
        if (islower(c))
            lowercase++;
        if (ispunct(c))
            interpunction++;
        if (isdigit(c))
            digit++;
        if (!isspace(c) && !inword)
        {
            inword = true;
            in_words++;
        }
        if (isspace(c) && inword)
        {
            inword = false;
        }
    }
    printf("in_words:%d ,uppercase:%d ,lowercase:%d ,interpunction:%d ,digit:%d\n",
           in_words, uppercase, lowercase, interpunction, digit);
    return 0;
}
