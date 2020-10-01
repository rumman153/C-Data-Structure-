#include<stdio.h>
int sum(int N)
{
    if(N==1) return 1;
    else return N+sum(N-1);
}
int main()
{
    int k=sum(5);
    printf("%d",k);
    return 0;
}
