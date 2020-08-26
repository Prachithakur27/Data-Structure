// print even position element 



#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *head = NULL;

int create()
{
	int n=0,data=0;
	NODE *newnode,*first;
	
	printf("Enter number of nodes : ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
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
		
			while(first->next!= NULL)
			{
				first = first->next;
			}
	
			first->next = newnode;
		}
	}
}
 
	
void display()
{
	NODE *temp = head;
	int cnt=0;

	while(temp!=NULL)
	{	
		cnt++;
		if(cnt%2 == 0)
		{
			printf("%d\t",temp->data);
			
		}
		temp = temp->next;
	}
	printf("\n");
}

int count()
{
	NODE *temp = head;
	int cnt=0;

	while(temp!=NULL)
	{
		cnt++;
		temp = temp->next;
	}
	
	printf("Number of nodes are : %d\n",cnt);
}


int main()
{
	create();
	display();
	count();
	
	return 0;
}
