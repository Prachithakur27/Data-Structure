// in singly linkedlist delete last node

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
	int data ;
	struct node *next;
}NODE;

struct node *head = NULL;

int create()
{
	int num,data;
	struct node *newnode,*first;
	
	printf("Enter number of nodes : ");
	scanf("%d",&num);

	for(int i=1;i<=num;i++)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
	
		printf("Enter data of node : ");
		scanf("%d",&newnode->data);
	
		newnode -> next = NULL;

		if(head == NULL)
		{
			head = newnode;
		}
		else
		{
			first = head;
			
			while(first->next!=NULL)
			{
				first = first->next;
			}
	
			first->next = newnode;
		}
	}
}

int DeleteAtLast()
{
	struct node *temp1 = head;
	struct node *temp=NULL;

	temp1;
	
	while(temp1->next != NULL)
	{
		temp1 = temp1 -> next;
	}
	
	temp = temp1;
	printf("deleted node data is  : %d\n",temp->data);
	free(temp);
}

void Display()
{
	struct node *temp = head;
	
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int count()
{
	struct node *temp = head;
	int cnt=0;
	
	while(temp!=NULL)
	{
		cnt++;
		temp = temp->next;
	}	
	
	printf("Number of nodes in linked list are : %d\n",cnt);		
}

int main()
{
	int ch,no=0;

	printf("1.create \n");
	printf("2.DeleteAtLast \n");
	printf("3.Display \n");
	printf("4.Count \n");
	//printf("5.Kth node \n");
	printf("5.Exit \n");

	
	while(1)
	{
		printf("@ Enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1	:	create();
						break;

			case 2	:	DeleteAtLast();
						break;
	
			case 3	:	Display();	
						break;
		
			case 4	:	count();
						break;

			case 5	:	exit(1);

			default : 	printf("Invalid choice \n");
						break;
		}
	}
	
	
	
	return 0;
}
