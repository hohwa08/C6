//ch18ex2.c
//문자배열 학습
#include <stdio.h>


int main()
{
    char season1[] = "Spring";
    char season2[20];
    char season3[20];

    season2[0] = 'F';
    season2[1] = 'a';
    season2[2] = 'l';
    season2[3] = 'l';

    strcpy(season3, "Summer");

    printf("season1: %s\n", season1);
    printf("season2: %s\n", season2);
    printf("season3: %s\n", season3);
    return 0;
}
