//ch19ex2_2.c
//�� ���ڿ��� �Է¹޾� ��ġ��

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    char str2[50];

    puts("ù��° ���ڿ��� �Է��ϼ���: ");
    gets(str1);
    puts("�ι�° ���ڿ��� �Է��ϼ���: ");
    gets(str2);

    strcat(str1, str2);
    puts(str1);


    return 0;
}
