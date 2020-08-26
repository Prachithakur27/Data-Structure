// singly link list insert at last

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

int InsertAtFirst(int no)
{
	struct node *newn = NULL;

	newn = (struct node*)malloc(sizeof(struct node));

	newn -> data = no;
	newn -> next = NULL;
	
	newn -> next = head;
	head = newn;
}

int InsertAtLast(int no)
{
	struct node *newn = NULL;
	struct node *temp = head;
	
	newn = (struct node*)malloc(sizeof(struct node));
	newn -> data = no;
	newn -> next = NULL;
	
	while(temp->next != NULL)
	{
		temp = temp -> next;
	}
	
	temp -> next = newn;
	newn -> next = NULL;
	newn = temp ;
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
	printf("2.InsertAtFirst \n");
	printf("3.InsertAtLast \n");	
	printf("4.Display \n");
	printf("5.Count \n");
	printf("6.Exit \n");

	
	while(1)
	{
		printf("@ Enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1	:	create();
						break;

			case 2	:	printf("Enter newnode data : ");
						scanf("%d",&no);
						InsertAtFirst(no);
						break;
	
			case 3	:	printf("Enter newnode data : ");
						scanf("%d",&no);
						InsertAtLast(no);
						break;

			case 4	:	Display();	
						break;
		
			case 5	:	count();
						break;
			
			
		
			case 6	:	exit(1);

			default : 	printf("Invalid choice \n");
						break;
		}
	}
	
	
	
	return 0;
}
