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

    //�迭 n �ʱ�ȭ
    for(i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;
        printf("%d ", n[i]);
    }
    //max, min �ʱ�ȭ
    max = n[0];
    min = n[0];
    //�ִ� �ּ� ���ϱ�
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
    printf("\n�ּҰ��� %d, %d��°, �ִ밪�� %d, %d��°�Դϴ�.", min, min_idx + 1, max, max_idx + 1);

    return 0;
}
