//ch18ex1.c
//���ڿ� �Է¹ޱ�

#include <stdio.h>


int main()
{
    char movie[50];
    int len, i;


    printf("�ֱ� �� ��ȭ ������ �Է��ϼ���(�Ѵܾ��): ");
    scanf("%s", movie);

    len = strlen(movie);
    printf("%s(%d����)\n", movie, len);

    //�� ���ھ� ���
    for(i = 0; i< len; i++)
    {
        printf("%c", movie[i]);
    }
    //��ȭ���� �Ųٷ�
    for(i = len; i >= 0; i--)
    {
        printf("%c", movie[i]);
    }
    return 0;
}
