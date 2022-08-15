//ch17ex4_1.c
//버블 정렬
#include <stdio.h>


int main()
{
    int i, j, tmp, k;
    int n[5] = {93, 75, 50, 32, 16};
    int cnt = 5;

    for(i = 0; i < cnt-1; i++)
    {
        for(j = 0; j < cnt -1 -i; j++)
        {

            if (n[j] > n[j + 1])
            {
                tmp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = tmp;
            }
        }

        for(k = 0; k< cnt; k++)
        {
            printf("%d ", n[k]);
        }
        printf("\n");
    }
    return 0;
}
