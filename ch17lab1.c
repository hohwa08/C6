//ch17lab1.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n[10];
    int sum = 0;
    int i;

    srand(time(NULL));

    for(i = 0; i < 10; i++)
    {
        n[i] = rand() % 100;
        sum += n[i];
        printf("%d ", n[i]);
    }

    //Æò±Õ Ãâ·ÂÇÏ±â

    printf("\nÆò±Õ: %d", sum / 10);


    return 0;
}
