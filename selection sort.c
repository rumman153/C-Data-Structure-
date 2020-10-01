#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n],i,j,min=0,swap=0;
    printf("Enter inputs of array:\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if (a[j]<a[min])
                {
                    min=j;
                }
            }
            if (min!=i)
        {
            swap=a[i];
            a[i]=a[min];
            a[min]=swap;
        }

        }
    printf("sorted array ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
