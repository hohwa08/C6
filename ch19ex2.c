//ch19ex2.c
//strcat
#include <stdio.h>

int main()
{
    char str1[1] = "�ȳ��ϼ���!";
    char str2[1] = "�ݰ����ϴ�!";

    strcat(str1, str2);

    puts(str1);
    puts(str2);

    return 0;
}
