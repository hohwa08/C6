//ch18p1.c
//���ڹ迭
#include <stdio.h>

int main()
{
    char month[10] = "September";
    printf("%s\n", month);

    //�迭 �� ����
    month[0] = 'A';
    month[1] = 'p';
    month[2] = 'r';
    month[3] = 'i';
    month[4] = 'l';
    month[5] = '\0';
    printf("���� �� month: %s\n", month);
    return 0;
}

