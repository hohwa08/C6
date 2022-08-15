//ch19ex2_2.c
//두 문자열을 입력받아 합치기

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    char str2[50];

    puts("첫번째 문자열을 입력하세요: ");
    gets(str1);
    puts("두번째 문자열을 입력하세요: ");
    gets(str2);

    strcat(str1, str2);
    puts(str1);


    return 0;
}
