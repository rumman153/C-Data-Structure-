#include<stdio.h>
int sum(int *a, int *b);
{
    *a=30,*b=50;
    int c=*a+*b;
    printf("%d",c);

}

int main()
{
    int a=20, b=30;
    sum (&a,&b);
    printf("%d %d",a,b);

}
