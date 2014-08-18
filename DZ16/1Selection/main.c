#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 5

void output(int a[], int size);
void input(int a[], int size);

int main()
{
    int a[n];
    int i, j;
    int buf;
    int min;
     printf("Enter the elements of array \n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    input (a,n);  /*вызываем функцию которая найдет min элемент, поменяем местами a [min] и a[i], и выведет фунцию=)*/
    output (a,n);
    return 0;
}
void output(int a[], int size)
{
    int i, j;
    int buf;
    int min;
for(i = 0; i < n-1; i++) {
    min=i;
        for(j = i+1; j < n; j++)
            if(a[j] < a[min])
                min = j;
        buf=a[i];
        a[i]=a[min];
        a[min]=buf;
    }
     for(i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\n");

}

void input(int a[], int size)
{
    int i, j;
    int buf;
    int min;
for(i = 0; i < n-1; i++) {
    min=i;
        for(j = i+1; j < n; j++)
            if(a[j] < a[min])
                min = j;
        buf=a[i];
        a[i]=a[min];
        a[min]=buf;
    }
     for(i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\n");
}
