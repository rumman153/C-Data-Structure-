#include<bits/stdc++.h>

using namespace std;

struct mynode
{
    int data;
    struct mynode *next;
};

typedef struct mynode mynode;
mynode *head=NULL;


void insert_at_last(mynode *newnode);
void insert_at_front(mynode *newnode);
void insert_before_a_node(mynode *newnode,int value);
void insert_after_a_node(mynode *newnode,int value);
void print_list();
void find_value(int value);


int main()
{
    int i,j,k,choice,d,value;

    while(1){
    printf("*** Choose one from the following options***\n");
    printf("1. Insert at Last\n2. Insert at Front\n3. Insert Before an element\n4. Insert After an element\n");
    printf("5. Print the list\n6. Search for an element\n7. Delete a node with specific value\n0. Exit the program\n");

    printf("Choose your option : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        mynode *newnode=(mynode*)malloc(sizeof(mynode));
        printf("Enter the integer input : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
		insert_at_last(newnode);
        /* finish the rest of the codes and also the code for the user defined function called insert_at_last*/
    }

    else if(choice==2)
    {
        mynode *newnode=(mynode*)malloc(sizeof(mynode));
        printf("Enter the integer input : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        insert_at_front(newnode);
    }

    else if(choice==3)
    {
        mynode *newnode=(mynode*)malloc(sizeof(mynode));
        printf("Enter the integer input : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        printf("Enter the value before you want to input : ");
        scanf("%d",&value);

        insert_before_a_node(newnode,value);

    }

    else if(choice==4)
    {
        mynode *newnode=(mynode*)malloc(sizeof(mynode));
        printf("Enter the integer input : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        printf("Enter the value after you want to input : ");
        scanf("%d",&value);
		insert_after_a_node(newnode,value);
        /* finish the rest of the codes and also the code for the user defined function called insert_after_a_node*/

    }

    else if(choice==5)
    {
        print_list();  /* complete that user defined function discussed in class */

    }

    else if(choice==6)
    {
        printf("Enter the value to be searched : ");
        scanf("%d",&value);
        find_value(value); /* complete the user defined function */

    }

    else if(choice==7)
    {
        /* still not discussed. We will learn it in the next class */
        printf("Not discussed yet, choose other options\n");
    }

    else if(choice==0)
    {
        return 0;
    }

    else printf("Sorry! Please try again.\n");


    }

    return 0;
}



void insert_at_last(mynode *newnode)
{

    /* complete this code here */
    if(head==NULL)head=newnode;

    else
    {
        mynode *temp = head;
        while(temp->next != NULL){
        	temp = temp->next;
		}
		temp->next=newnode;
    }

}

void insert_at_front(mynode *newnode)
{

    if(head==NULL)head=newnode;

    else
    {
        newnode->next=head;
        head=newnode;
    }
}

void insert_before_a_node(mynode *newnode, int value)
{

    /* complete this code here from the class */
    if(head==NULL)head=newnode;
	else
    {
        mynode *temp = head;
        if(head->data == value){
        	newnode->next = head;
        	head = newnode;
		}
		else{
			while(temp->next != NULL){
				if(temp->data == value){
					newnode->next = temp->next;
					temp->next = newnode;
				}
				else{
					temp = temp->next;
				}
			}
		}
    }
}

void insert_after_a_node(mynode *newnode, int value)
{

    /* complete this code here from your understanding of the linked list */
    if(head==NULL)head=newnode;
	else
    {
        mynode *temp = head;
        if(head->data == value){
        	newnode->next = head;
        	head = newnode;
		}
		else{
			while(temp->next != NULL){
				if(temp->data == value){
					temp = temp->next;
				}
				else{
					newnode->next = temp->next;
					temp->next = newnode;
				}
			}
		}
    }

}

void print_list()
{

    /* complete this code here from the class */
	mynode *temp;
    temp = head;
    while (temp != NULL){
		printf("%d",temp->data);
		temp = temp->next;
   }
	printf("\n");
}

void find_value(int value)
{

    /* complete this code here from your understanding of the linked list */
    mynode *temp;
    temp = head;
    while (temp != NULL){
		if((temp->data) == value){
			printf("Exists\n");
		}
		else{
			printf("Doesn\'t exist\n");
		}
		temp = temp->next;
   }

}










