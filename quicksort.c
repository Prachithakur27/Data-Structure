#include<stdio.h>

int Quicksort(int arr[],int lb,int up)
{
	int pivot=arr[lb];
	int i=0,j=0;

	if(lb<up)	
	{
		j=Partition(arr,lb,up);              //to find the space for partition
		Quicksort(arr,lb,j-1);  				 //sort left part
		Quicksort(arr,j+1,up);                  //sort right part
	}
}
	
int Partition(int arr[],int lb,int ub)
{
	int down,up,pivot,temp=0;
	
	if(lb<ub)
	{
		down = lb;
		up = ub;
	
		pivot = arr[lb];						//first element of partition is a pivot
		
		while(down<up)
		{
			while(arr[up]>pivot && up>lb)
			{
				up--;
			}
			while(arr[down]<=pivot && down<ub)
			{
				down++;
			}
			if(down<up)
			{
				temp=arr[down];
				arr[down]=arr[up];
				arr[up]=temp;
			}
		}
		temp = arr[lb];
		arr[lb]=arr[up];
		arr[up]=temp;
	
		return (up);
	}
}

int main()
{
	int n,i=0, arr[50];
	
	printf("Enter number of elements : ");
	scanf("%d",&n);

	printf("Enter array elements : ");

	for(i=0;i<n;i++)
	{
		scanf("%d \t",&arr[i]);
	}

	printf("Unsorted array :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}	

	Quicksort(arr,0,n-1);
	printf("Sorted array : ");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}

	return 0;
}


