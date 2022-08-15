//ch19ex1.c
//주소 입력 받아 거꾸로 출력하기

#include <string.h>
#include <stdio.h>

int main()
{
    int i, len;
    char addr[50];

    //printf("영문 주소를 입력하세요: ");
    puts("영문 주소를 입력하세요: ");
    //scanf("%s", addr);
    gets(addr);
;
    len = strlen(addr);
    //거꾸로 출력
    puts(addr);
    for(i = len - 1; i >= 0; i--)
    {
        //printf("%c", addr[i]);
        putchar(addr[i]);
    }

    return 0;
}
