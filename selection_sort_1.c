// way 2 = using malloc

#include<stdio.h>
#include<stdlib.h>

int Selection_sort(int arr[],int size)
{
	int i,j,temp=0;
	//int min=arr[0];

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	printf("Sorted array is : ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main()
{
	int size,i=0;
	
	printf("Enter size of array : ");
	scanf("%d",&size);

	int *selection;
	
	selection = (int*)malloc(size* sizeof(int));
	
	printf("Enter array element : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&selection[i]);
	}

	printf("Unsorted array is : ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",selection[i]);
	}

	printf("\n");

	Selection_sort(selection,size);
	
	return 0;
}
