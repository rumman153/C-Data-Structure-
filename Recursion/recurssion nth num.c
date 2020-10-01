#include<stdio.h>
int s(int n)
{
    if(n==1) return 2;
    if(n==2) return 4;
    if(n==3) return 5;
    if(n==4) return 8 ;
    if(n==5) return 9;
    if(n==6) return 11;
    else return s(n-2)*s(n-4)*s(n-6);
}
int main()
{
    int n;
    scanf("%d",&n);
    int k=s(n);
    printf("%d", k);
    return 0;

}
