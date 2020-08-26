// using singly link list find k'th node from end (google,amazon interviev question)

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

/*int InsertAtFirst()
{
	struct node*temp = head;
	struct node *newnode=NULL;
	int data;
	
	if(head == NULL)
	{
		head = newnode;
	}
	else if(temp->next==NULL) 
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->next = temp;
		
		printf("Enter data : ");
		scanf("%d",&newnode->data);
				
		
	}

}*/	

int Kthnode()
{
	int k=0,cnt=1,n=0,x=0;

	printf("Enter k'th position : ");
	scanf("%d",&k);

	struct node *p=head,*q=head,*temp=head ;
	
	while(temp!=NULL)
	{
		n++;
		temp=temp->next;
	}
	
	printf("number of nodes are : %d\n",n);

	x = n-k+1;
	printf("x is : %d\n",x);
	
	for(int i=1;i<x;i++)
	{
		q = q->next;
		p = p->next;
	}
	
	printf("k'th node data : %d\n",*p);	
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
	int ch;

	printf("1.create \n");
	printf("2.InsertAtFirst \n");
	printf("3.Display \n");
	printf("4.Count \n");
	printf("5.Kth node \n");
	printf("6.Exit \n");

	
	while(1)
	{
		printf("@ Enter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1	:	create();
						break;

			//case 2	:	InsertAtFirst();
				//		break;
	
			case 3	:	Display();	
						break;
		
			case 4	:	count();
						break;

			case 5	:	Kthnode();
						break;

			case 6	:	exit(1);

			default : 	printf("Invalid choice \n");
						break;
		}
	}
	
	
	
	return 0;
}
