#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("input.txt","r");

    int A[100],index=0;
    float B[100];
    char C[100];
    while(!feof(fp)){
        fscanf(fp,"%d %f %c",&A[index],&B[index],&C[index]);
        index++;
    }
    int i;
    for(i=0;i<index;i++) printf("%d ",A[i])
    for(i=0;i<index;i++) printf("%f ",B[i])
    for(i=0;i<index;i++) printf("%c ",C[i])


    return 0;
}
