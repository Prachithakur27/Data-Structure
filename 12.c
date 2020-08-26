// in singly link list is palindrome or for odd    

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct node
{
	int data ;
	struct node *next;
}NODE;

/*
struct StackNode 
{ 
    int data; 
    struct StackNode* next; 
};*/
 
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

int Reverse_LL(NODE *head)
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

int ChkPalindrome()
{
	struct node *p=head;
	struct node *q=head;
	struct node *first_LL;
	struct node *second_LL;

	// if there is only one character in the LL
	if(p -> next == NULL)
	{
		printf("It is palindrome \n");
		return;
	}
	
	//split the linked list 
	while(1)
	{
		p = p -> next -> next;
		if(p == NULL)
		{
			second_LL = q -> next;
			break;
		}
		if(p -> next == NULL)
		{
			second_LL = q -> next -> next;
			break;
		}
		q = q -> next;	
	}
	q -> next = NULL;
	//reverse the second LL
	second_LL = Reverse_LL(second_LL);
	//printf("second start  =  %d\n",second_LL->data);	
	//now compare the splitted two linked lists
	first_LL = head;
		
	while(first_LL!=NULL && second_LL!=NULL) //compare the two strings
	{		
		if(first_LL->data == second_LL->data)
		{
			first_LL = first_LL->next;
			second_LL = second_LL->next;
		}
		else
		{
			printf("Not a Palindrome \n");
			return;					
		}		
	}	
	printf("It is a palindrome \n");
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
	//printf("2.Reverse_LL \n");
	printf("3.ChkPalindrome \n");
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

			//case 2	:	Reverse_LL();
						//break;

			case 3	:	ChkPalindrome();
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
