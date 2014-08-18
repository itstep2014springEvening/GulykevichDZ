#include "selection.h"
#include <stdio.h>
#include <stdlib.h>

void output(const int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void input(int a[], int size)
{
    printf("Enter the elements of array \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
}
void  sort  (int a[], int size)
{
    int min;
    for(int i = 0; i < size-1; i++)
    {
        min=i;
        for(int j = i+1; j < size; j++)
            if(a[j] < a[min])
                min = j;
        int buf=a[i];
        a[i]=a[min];
        a[min]=buf;
    }
}
