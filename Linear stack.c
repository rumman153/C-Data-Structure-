#include<stdio.h>
#define MAX 7
int top = -1;
int arr[MAX];

int main()
{
	int choice;

	do{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Top\n");
		printf("4.Display\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1 :
			push();
			break;
		 case 2:
			pop();
			break;
		 case 3:
			Top();
			break;
		 case 4:
            display();
		}}while(choice!=4);
}

void push()
{
	int item;
	if(top == (MAX-1))
		printf("Can't add anymore\n");
	else
	{
		printf("Enter the item to push in stack : ");
		scanf("%d",&item);
		top=top+1;
		arr[top] =item;
	}
}

void pop()
{
	if(top == -1)
		printf("Add something first\n");
	else
	{
		printf("Popped element is : %d\n",arr[top]);
		top=top-1;
	}
}
void Top()
{
    if(top == -1)
        printf("Nothing");
    else
    {
        return arr[top];
    }
}
void display()
{
	int i;
	if(top == -1)
		printf("Stack is empty\n");
	else
	{
		printf("Stack elements :\n");
		for(i = top; i >=0; i--)
			printf("%d\n", arr[i] );
	}
}

