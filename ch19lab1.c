//ch19lab1.c
//��ȣ �Ǻ�
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


    printf("��ȣ�� �Է����ּ���(19���� �̳�): ");
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
        printf("\n��ȣ�� �����մϴ�.\n");
    }
    else
    {
        printf("\n��ȣ�� �ٽ� ������ּ���.\n");
    }

    return 0;
}
