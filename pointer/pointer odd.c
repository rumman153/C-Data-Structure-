#include<stdio.h>

int odd (int *b, int size)
{
    int i, od=0;
    for(i=0;i<size;i++)
    {
      if ((*b)%2==1)
      od=od+*b;
      b++;

    }
    return od;
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=odd(&a,5);
    printf("%d\n",s);
    return 0;

}
