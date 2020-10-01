#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("nangapanga.txt","r");
    char word[1000];
    fscanf(fp,"%s",word);
    printf("%s", word);
    return 0;


}
