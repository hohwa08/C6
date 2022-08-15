//ch17lab2.c

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n[10];
    int max, min, i;
    int max_idx, min_idx;

    srand(time(NULL));

    //배열 n 초기화
    for(i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;
        printf("%d ", n[i]);
    }
    //max, min 초기화
    max = n[0];
    min = n[0];
    //최대 최소 구하기
    for(i = 0; i < 10; i++)
    {
        if(n[i] > max)
        {
            max = n[i];
            max_idx = i;
        }

        if(n[i] < min)
        {
            min = n[i];
            min_idx = i;
        }
    }
    printf("\n최소값은 %d, %d번째, 최대값은 %d, %d번째입니다.", min, min_idx + 1, max, max_idx + 1);

    return 0;
}
