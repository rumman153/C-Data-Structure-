#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("notun file.txt","r");
    char ch;
    int word=0;
    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(ch==' ' || ch=='\n')
        word ++;
    }
    printf("%d",word+1);
    fclose(fp);
    return 0;
}
