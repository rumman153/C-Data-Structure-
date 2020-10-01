#include<stdio.h>
int fib(int n)
{
 if(n==1) return 0;
  if(n==2) return 2;
  if(n==3) return 3;
  if(n==4) return 5;
  else return fib(n-1)+fib(n-2)+fib(n-3)+fib(n-4);

}
int main()
{
    int n;
    scanf("%d",&n);
    int k=fib(n);
    printf("%d", k);
    return 0;


}
