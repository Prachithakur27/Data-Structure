//stack implimentation using array

#include<stdio.h>
#include<stdlib.h>
#define N 5

int stack[N];
int top = -1;

int push()
{
	int data =0 ;

	printf("Enter data of stack : ");
	scanf("%d",&data);
	
	if(top == N-1)
	{
		printf("Stack is full \n");
	}
	else
	{
		top++;
		stack[top] = data;
	}
}

void display()
{
	for(int i=N;i>=0;i--)
	{ 
		printf("%d\t",stack[i]);
	}

	printf("\n");
}

void peek()						//top element
{
	if(top == -1)
	{
		printf("Stack is empty \n");
	}
	else
	{
		printf("Top most element is %d\n",stack[top]);
	}
}

void pop()
{	
	int temp=0;
	
	if(top == -1)
	{
		printf("Stack is empty \n");
	}
	else
	{
		temp = stack[top];
		top--;	
		printf("Deleted or poped item is : %d\n",temp);
	}

	
}	


void main()
{
	int ch;
	

	
	do
	{
		printf("Enter choice\n 1.push\n 2.pop\n 3.display\n 4.peek\n 5.exit\n");
		scanf("%d",&ch);
	
		switch(ch)
		{
 			case 1 : push();
					 break;
		
			case 2 : pop();
					 break;
			
			case 3 : display();
					 break;
			
			case 4 : peek();
					 break;

			case 5 : exit(1);
			

			default : printf("Invalid messege \n");
		}
	}while(ch != 0);		
}
