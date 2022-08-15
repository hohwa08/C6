//ch17ex3_2.c

#include <stdio.h>


int main()
{
    int s[] = {10, 5, 8, 20, 16};
    int a[] = {7, 2, 10, 9, 15};
    int min, min_idx, i;

    min_idx = 0;
    min = s[0];

    for(i = 0; i< 5; i++)
    {
        if(s[i] < min)
        {
            min = s[i];
            min_idx = i;
        }
    }

    printf("경기 회차: %d회\n", min_idx + 1);
    printf("득점: %d점\n", min);
    printf("경기 어시스트: %d회\n", a[min_idx]);

    return 0;
}
