//ch18ex1.c
//문자열 입력받기

#include <stdio.h>


int main()
{
    char movie[50];
    int len, i;


    printf("최근 본 영화 제목을 입력하세요(한단어로): ");
    scanf("%s", movie);

    len = strlen(movie);
    printf("%s(%d글자)\n", movie, len);

    //한 글자씩 출력
    for(i = 0; i< len; i++)
    {
        printf("%c", movie[i]);
    }
    //영화제목 거꾸로
    for(i = len; i >= 0; i--)
    {
        printf("%c", movie[i]);
    }
    return 0;
}
