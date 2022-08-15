//ch17ex4.c

#include <stdio.h>


int main()
{
    int i, j, tmp;

    i = 3;
    j = 5;
    tmp = i;

    printf("i:%d, j:%d\n", i, j);

    //i, j 값 바꾸기
    i = j;
    j = tmp;

    printf("i:%d, j:%d\n", i, j);

    return 0;
}
