//ch17ex3.c

#include <stdio.h>


int main()
{
    int i;
    int s[] = {10, 5, 8, 20, 16};
    int a[] = {7, 2, 10, 9, 15};
    int max, max_idx;

    max = s[0];
    max_idx = 0;

    for(i = 0; i < 5; i++)
    {
        if (s[i] > max)
        {
            max = s[i];
            max_idx = i;
        }
    }


    printf("�ִ� ���� ���: %d, ����: %d, ��ý�Ʈ: %d", max_idx + 1, max, a[max_idx]);

    return 0;
}
