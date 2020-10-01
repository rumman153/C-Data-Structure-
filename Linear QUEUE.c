#include<stdio.h>
#define MAX 7
int top = -1;
int arr[MAX];

int main()
{
	int choice;

	do{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1 :
			enqueue();
			break;
		 case 2:
			dequeue();
			break;
		 case 3:
            display();
		}}while(choice!=3);
}

void enqueue()
{
	int item;
	if(top == (MAX-1))
		printf("Can't add anymore\n");
	else
	{
		printf("Enter the item to push in Queue : ");
		scanf("%d",&item);
		top=top+1;
		arr[top] =item;
	}
}

void dequeue()
{
	int i;

	if(top == -1)
		printf("Add something first\n");
	else
	{
        printf("|Dequeue element is : %d\n",arr[0]);

		for(i=0;i<top;i++)
        {
           arr[i]=arr[i+1];
        }

        top--;
	}
}

void display()
{
	int i;
	if(top == -1)
		printf("Queue is empty\n");
	else
	{
		printf("Queue elements :\n");
		for(i = 0; i <=top; i++)
			printf("%d\n", arr[i] );
	}
}

