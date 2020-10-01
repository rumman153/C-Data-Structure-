#include<stdio.h>
int total (int *b, int size)
{
    int i, sum=0;
    for(i=0;i<size;i++)
    {
     sum= sum+ *b;
     b++;
    }
    return sum;
}
    int main()
    {
     int a[5],i;
     for(i=0;i<5;i++)
     {
         scanf("%d",&a[i]);
     }
     int s= total(&a,5);
     printf("%d\n",s);
     return 0;
    }

