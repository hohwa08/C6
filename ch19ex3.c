//ch19ex3.c
//���ڿ� ��

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[21], str2[21];//20��

    puts("ù° ���ڿ� �Է�: ");
    gets(str1);

    puts("�ι�° ���ڿ� �Է�: ");
    gets(str2);

    if(strcmp(str1, str2) == 0)
    {
        puts("�� ���ڿ� ��ġ");
    }
    else if(strcmp(str1, str2) < 0)
    {
        puts("str1�� ���������� ���Դϴ�.");
    }
    else
    {

        puts("str2�� ���������� ���Դϴ�.");
    }
    return 0;
}
