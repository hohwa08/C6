//ch19ex1.c
//�ּ� �Է� �޾� �Ųٷ� ����ϱ�

#include <string.h>
#include <stdio.h>

int main()
{
    int i, len;
    char addr[50];

    //printf("���� �ּҸ� �Է��ϼ���: ");
    puts("���� �ּҸ� �Է��ϼ���: ");
    //scanf("%s", addr);
    gets(addr);
;
    len = strlen(addr);
    //�Ųٷ� ���
    puts(addr);
    for(i = len - 1; i >= 0; i--)
    {
        //printf("%c", addr[i]);
        putchar(addr[i]);
    }

    return 0;
}
