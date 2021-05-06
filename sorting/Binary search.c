#include <stdio.h>
int binarysearch(int arr[],int start,int end, int x)
{
   while(start<end)
   {
	   int mid= start+(end-start)/2;
	   if(arr[mid]==x)
	   return mid;
	   if(arr[mid]<x)
	   start=mid+1;
	   else
	   end=mid-1;
   }
   return -1;
}
void main()
{
	
    int n;
    int arr[10];
	printf("\nEnter the size: ");
	scanf("%d",&n);
	printf("\nEnter the element :  ");
	for(int i=0; i<n; i++)
	scanf("%d",&arr[i]);
    int x;
	printf("\nEnter the element to search it's index :  ");
	scanf("%d",&x);
    printf("\n-------------------------------------------------\n");

	int result = binarysearch(arr,0,n, x);
    (result == -1)
        ? printf("\nElement is not present in array")
        : printf("\nElement is present at index %d", result);
    return 0;
}