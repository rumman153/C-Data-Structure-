#include<stdio.h>

struct student{

    char name[500];
    char gender[100];
    char designation[500];
    char department[100];
    int salary[100];
    int joiningyear[10];
    int contactnumber[100];
    int contractyear[100];

};

int main()
{
    int i;
    struct student st[100];
    for(i=0; i<3; i++)
    {
        scanf("%s %s %s %s %d %d %d %d",st[i].name,st[i].gender,st[i].designation,st[i].department,st[i].salary,st[i].joiningyear,st[i].contactnumber,st[i].contractyear );
    }
    int index=0;
    for(i=0;i<3;i++)
    {
        if(st[i].salary>50000 && strcmp(st[i].department,"Management")==0)
        {
            index=i;

            printf("%s\n",st[index].name);

        }
        index=0;
    }


    return 0;


}
