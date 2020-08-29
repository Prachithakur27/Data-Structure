//Queue using linkedlist -> dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node* next;
}NODE;

struct node* front = 0;
struct node* rare = 0;

int enque(int x)
{
	struct node* newnode = 0;
	
	newnode = (struct node*)malloc(sizeof(NODE));
	newnode->data = x;
	newnode -> next = 0;
	
	if(front == 0 && rare == 0)
	{
		front = rare = newnode;
	}
	else
	{
		rare->next = newnode;	
		rare = newnode;
	}
}	

int display()
{
	struct node* temp=0;

	if(front == 0 && rare == 0)
	{
		printf("Queue is empty \n");
	}
	else
	{
		temp = front;
		while(temp!=0)
		{
			printf("%d\t",temp->data);
			temp = temp->next;
		}
	}
	printf("\n");
}

int peek()
{
	if(front == 0 && rare == 0)
	{
		printf("Queue is empty \n");
	}
	else
	{
		printf("Topmost data : %d\n",front->data);
	}
}

int dequeue()
{
	struct node* temp = front;
	
	if(front == 0 && rare == 0)
	{
		printf("Queue is empty \n");
	}
	else
	{
		printf("Poped data is : %d\n",front->data);
		front = front->next;
		free(temp);
	}
}

int main()
{
	enque(5);
	enque(8);
	enque(-1);
	display();
	peek();
	dequeue();
	display();
	
}

