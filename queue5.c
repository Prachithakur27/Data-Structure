//Implimentation of Queue using 2 stack 
//Static implimentation

#include<stdio.h>

#define n 5

int stack1[n],stack2[n];
int top1=-1,top2=-1;
int cnt=0;

void Push1(int x)
{
	if(top1 == n-1)
	{	
		printf("Stack is full \n");
	}
	else
	{
		top1++;
		stack1[top1] = x;
	}
}

void Push2(int x)
{
	if(top2 == n-1)
	{
		printf("Stack is full \n");
	}
	else
	{
		top2++;
		stack2[top2]=x;
	}
}

int Pop1()
{
	return stack1[top1--];
}

int Pop2()
{
	return stack2[top2--];
}

void deque()
{
	int temp,temp1,a;
	
	if(top2 == -1 && top2 == -1) 
	{
		printf("Queue is empty \n");
	}
	else
	{
		for(int i=0;i<cnt;i++)
		{
			temp = Pop1();
			Push2(temp);
		}
		temp1 = Pop2();
		printf("Dequed element : %d\n",temp1);
		cnt--;
	
		for(int i=0;i<cnt;i++)
		{
			a = Pop2();
			Push1(a);
		}
		
	}	
}

void enque(int x)
{
	Push1(x);
	cnt++;
}

void Display()
{
	for(int i=0;i<n-1;i++)
	{
		printf("%d\t",stack1[i]);	
	}
	printf("\n");
}

void main()
{
	enque(5);
	enque(2);
	enque(-1);
	deque();
	enque(7);
	Display();
} 
