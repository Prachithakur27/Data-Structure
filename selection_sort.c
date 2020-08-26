// way 1

#include<stdio.h>



int Selection_sort(int arr[],int size)
{
	int i,j,temp=0;
	int min= 0;

	for(i=0;i<size-1;i++)
	{
		min = i;

		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min = j;
			}
		}
			
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
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

	int selection[size];
	
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
