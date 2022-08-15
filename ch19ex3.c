//ch19ex3.c
//문자열 비교

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[21], str2[21];//20자

    puts("첫째 문자열 입력: ");
    gets(str1);

    puts("두번째 문자열 입력: ");
    gets(str2);

    if(strcmp(str1, str2) == 0)
    {
        puts("두 문자열 일치");
    }
    else if(strcmp(str1, str2) < 0)
    {
        puts("str1이 사전순으로 앞입니다.");
    }
    else
    {

        puts("str2이 사전순으로 앞입니다.");
    }
    return 0;
}
