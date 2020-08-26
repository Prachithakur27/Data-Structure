// Dynamic implimentation of linear queue in c

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE;

int Queue()
{
	Front=NULL;
	Rare=NULL;
	size=0;
}

int count()
{
	int size;
	return size;
}


void display()
{
	PNODE temp = Front ;

	while(temp!=NULL)
	{
		printf("%d",temp-data);
		temp=temp->next;
	}
}

void Enqueue()
{
	int no;

	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;

	if(size==0)	
	{
		Front=newn;
		Rare=newn;
	}
	else 
	{
		Rare->next=newn;
		Rare=Rare->next;   //Rare=newn	 	
	}
	
	size++;
}

int Dequeue()
{
	int temp = -1;

	if(size == 0)
	{
		return temp;
	}
	else if(size == 1)
	{
		temp = Front->data;
		delete Front;
		Front = NULL;
		Rare = NULL;

		size--;

		return temp;
	}
	else
	{
		PNODE ptr=Front;
		temp=ptr->data;
		Front=Front->next;
		delete ptr;

		size--;

		return temp;	
	}
}

void ~Queue()
{
	PNODE temp=Front;
	
	while(temp!=NULL)
	{
		Front=Front->next;
		delete temp;
		temp=Front;
	}
}

int main()
{
	PNODE Front=NULL;
	PNODE Rare=NULL;
	int size;

	Enqueue(11);
	Enqueue(21);
	Enqueue(32);
	Enqueue(61);

	count();
	printf("%d",Dequeue());

	return 0;
}	
	
