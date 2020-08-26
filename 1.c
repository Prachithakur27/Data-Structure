#include<stdio.h>
#include<stdlib.h>
#define TRUE 0
#define FALSE 1

typedef int BOOL;

struct node
{
	int data;
	struct node* next;
}NODE;

//typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

BOOL Insertfirst(PPNODE,int);
void display(PNODE);
int count(PNODE);
int reverse(PPNODE);


int main()
{
	PNODE head = NULL;
	int iret=0,pret=0;
	BOOL bret=FALSE;

	bret=Insertfirst(&head,51);
	bret=Insertfirst(&head,21);
	bret=Insertfirst(&head,11);

	reverse(head);

}

int Insertfirst(PPNODE first,int no)
{
	PNODE newn = NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next = NULL;
	
	newn->next = *first;
	newn = *first;
}
	
int reverse(PPNODE first)
{
	PPNODE temp = first;
	
	while(temp!= NULL)
	{
		temp = temp->next;
	}
	printf("%d\t",first->data);
	
}
