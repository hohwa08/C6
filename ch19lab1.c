//ch19lab1.c
//암호 판별
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pw[20];
    int i, len;
    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;


    printf("암호를 입력해주세요(19글자 이내): ");
    gets(pw);

    len = strlen(pw);

    for(i = 0; i < len; i++)
    {
       // printf("%c %d %d %d\n", pw[i], isupper(pw[i]), islower(pw[i]), isdigit(pw[i]));

        if (isupper(pw[i]))
        {
            hasUpper = 1;
            continue;
        }
        if (islower(pw[i]))
        {
            hasLower = 1;
            continue;
        }
        if (isdigit(pw[i]))
        {
            hasDigit = 1;
        }
    }

    //printf("%d %d %d\n", hasUpper, hasLower, hasDigit;)
    if(hasUpper && hasLower && hasDigit && len > 7)
    {
        printf("\n암호가 안전합니다.\n");
    }
    else
    {
        printf("\n암호를 다시 만들어주세요.\n");
    }

    return 0;
}
