// Reverse the singly Linked List 


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

int Reverse_LL()
{
	//struct node *temp = head;
	struct node *prev = NULL;
	struct node *current = head;
	struct node *next = NULL;
	
	while(current != NULL)
	{
		//store next
		next = current -> next;
	
		//reverse current node's pointer
		current -> next = prev;
	
		//move pointers one position ahead
		prev = current;
		current = next;
	}
	head = prev;		
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
	int ch,ans=0;

	printf("1.create \n");
	printf("2.Reverse LL \n");
	printf("3.Display \n");
	printf("4.Count \n");
	printf("5.Exit \n");

	while(1)
	{
		printf("@ Enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1	:	create();
						break;

			case 2	:	Reverse_LL();
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
