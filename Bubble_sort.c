//Bubble sort way 1

#include<stdio.h>

int BubbleSort(int arr[],int size)
{
	int i,j,min,pass;

	for(i=0;i<size;i++)
	{
		//min = arr[pass];
		for(j=i;j<size-1;j++)
		{
			if(arr[j]<arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	printf("Sorted array elements : ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}

	printf("\n");
}

int main()
{
	int size,i=0;
	
	printf("Enter array size ");
	scanf("%d",&size);
	
	int arr[size];

	printf("Enter array elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Unsorted array elements : ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}

	printf("\n");

	BubbleSort(arr,size);
	
	return 0;
}
