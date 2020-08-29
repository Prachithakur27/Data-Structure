// stack implimentation using linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
}NODE;

struct node* top =0;

void push(int x)
{
	struct node* newnode = 0;

	newnode = (struct node*)malloc(sizeof(NODE));
	newnode -> data = x;
	newnode -> next = top;
	
	top = newnode;
}

void display()
{
	struct node* temp = top;
	
	if(top == 0)
	{
		printf("stack is empty \n");
	}
 
	while(temp != 0)
	{
		printf("%d\t",temp->data);
		temp =  temp->next;
	}

	printf("\n");
}		

void peek()
{
	if(top == 0)
	{
		printf("stack is empty \n");
	}
	else
	{
		printf("Top element is : %d\n",top->data);
	}
}

void pop()
{
	struct node* temp = top;
	
	if(top == 0)
	{
		printf("stack is empty \n");
	}
	else
	{
		printf("Poped element is : %d\n",top->data);
		top = top->next;		
	}
		
	free(temp);
}

void main()
{
	push(2);
	push(4);
	push(5);
	pop();
	display();
	push(7);
	push(8);
	push(10);
	peek();
	display();
}
