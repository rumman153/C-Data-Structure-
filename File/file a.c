#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("nangapanga.txt","a");
    char word[1000];
    fgets(word,1000,fp);
    fputs("i love you\n",fp);
    fclose(fp);
    return 0;


}
