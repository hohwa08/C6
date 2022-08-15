//ch18p1.c
//문자배열
#include <stdio.h>

int main()
{
    char month[10] = "September";
    printf("%s\n", month);

    //배열 값 수정
    month[0] = 'A';
    month[1] = 'p';
    month[2] = 'r';
    month[3] = 'i';
    month[4] = 'l';
    month[5] = '\0';
    printf("수정 후 month: %s\n", month);
    return 0;
}

