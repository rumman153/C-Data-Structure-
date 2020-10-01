#include<stdio.h>
int main()
{
    int x,y;
    int *a, *b;
    printf("\n Enter two numbers:");
    scanf("%d%d", &x,&y);
    a=&x;
    b=&y;
    if(*a>*b)
    printf("\n %d is larger than %d", *a,*b);
    else
    printf("\n %d is larger than %d", *b,*a);
    return 0;
}
