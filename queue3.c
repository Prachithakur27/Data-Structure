//circular queue using array 
//drawback of linear queue -> wastetage of memory after dequeue operation

#include<stdio.h>
#define n 5

int queue[n];
int front = -1;
int rare  = -1;

int enque(int x)
{
	if((rare+1)%n == front)
	{
		printf("Queue is full \n ");
	}
	else if(front == -1 && rare == -1)
	{
		front = rare = 0;
		queue[rare] = x;
	}
	else
	{
		rare = (rare+1) % n;
		queue[rare] = x;
			
	}
} 

int dequeue()
{
	int temp;
	if(front == -1 && rare == -1)
	{
		printf("Queue is empty \n");
	}
	else if(front == rare)
	{
		front = rare = -1;
	}
	else
	{
		temp = queue[front];
		printf("Dequeued element is : %d\n",temp);
		front=(front+1)%n;
	}
}

int peek()
{
	int temp;
	
	if(front == -1 && rare == -1)
	{
		printf("Queue is empty \n");
	}
	else
	{
		temp=queue[front];
		printf("Topmost element is : %d\n",temp);
	}
}

int display()
{
	if(front == -1 && rare == -1)
	{
		printf("Queue is empty \n");
	}
	else
	{
		for(int i=front;i<rare+1;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
	printf("\n");
		
}

int main()
{
	enque(5);
	enque(8);
	enque(-1);
	display();
	enque(11);
	dequeue();
	display();
	peek();
}
