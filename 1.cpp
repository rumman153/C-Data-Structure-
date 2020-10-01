#include<bits/stdc++.h>

using namespace std;

struct st{
    int id;
};

int main()
{
    struct st *p, *q,*r;

    p=(struct st *)malloc(sizeof(struct st));
    q=(struct st *)malloc(sizeof(struct st));
    r=(struct st *)malloc(sizeof(struct st));

    scanf("%d",&p->id);
    scanf("%d",&q->id);
    scanf("%d",&r->id);

    printf("%d\t%d\t%d ",p->id,q->id,r->id);
}
