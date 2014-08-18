#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define n 5

void sort(int a[], int size);
void input(int a[], int size);
void output(const int a[], int size);

int main()
{
    int a[n];
    input (a,n);
    output (a,n);
    sort  (a,n);
    output (a,n);
    return 0;
}

void output(const int a[], int size)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void input(int a[], int size)
{
    printf("Enter the elements of array \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void  sort  (int a[], int size)
{
    int min;
    for(int i = 0; i < n-1; i++)
    {
        min=i;
        for(int j = i+1; j < n; j++)
            if(a[j] < a[min])
                min = j;
        int buf=a[i];
        a[i]=a[min];
        a[min]=buf;
    }
}
