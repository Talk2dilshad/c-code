//Problem: Given an array arr[] of n elements, write a function to search a given element x in arr[].


#include <stdio.h>

int search(int arr[],int n , int x)
{
	for(int i =0; i< n; i++)
	if(arr[i]==x)return i;
	return -1;
}
//driver code
int main()
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
    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? printf("\nElement is not present in array")
        : printf("\nElement is present at index %d", result);
    return 0;
}
