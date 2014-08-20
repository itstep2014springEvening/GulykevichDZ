#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=100000,top = -1;
    char stack[N],a=0,temp;
    printf("Hello. Enter symbol's \n");
    while (temp!=';')
    {
        scanf("%c", &temp);
        switch (temp)
        {
            stack[++top]=temp;
        case '+':
            stack[++top]=++a;
            break;
        case '-':
            stack[++top]=--a;
            break;
        case '<':
            --top;
            break;
        case '>':
            ++top;
        case '.':
            printf("%c", stack[top]);
            break;
        }
    }
    return 0;
}
