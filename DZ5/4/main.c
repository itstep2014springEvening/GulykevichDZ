#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max,min;
    printf("Enter a>=1\n");
    scanf ("%d", &a);
    printf ("Enter b\n");
    scanf ("%d",&b);
    if (a>=1){

    }
    else {
        printf ("error! Enter a>=1 !! \n");
    }
    if (a>b) {
        max=a;
        min=b;
        printf ("max=%d,min=%d",max,min);
    }
    else {

        max=b;
        min=a;
    printf ("max=%d,min=%d",max,min);
    }

    return 0;
}
