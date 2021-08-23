// ALGORITHM
// start
//  ask user length of array 
// create Array A[length] 
// print the element of unsorted array
//  pass array as pointer to func() bubble 
//  create variable temp  and bool swapped as false
//  loop through all number
// loop through numbers falling ahead 
// check if next number is lesser than current number
// swap the numbers.
// if no number was swapped that means 
//   array is sorted now, break the loop. 
// Bubble up the highest number

#include <stdio.h>
#include <stdbool.h>
void display(int a[],int n)
{
    printf("[");
    for(int i=0;i < n; i++)
    printf(" %d ",a[i]);
    printf("]\n");
}
void bubbleSort(int *a,int n) {
   int temp;
   int i,ptr;
	
   bool swapped = false;
   
   // loop through all numbers 
   for(i = 0; i < n-1; i++) 
   { 
      swapped = false;
		
      // loop through numbers falling ahead 
      for(ptr = 0; ptr < n-1-i; ptr++)
      {
        // printf("     Items compared: [ %d, %d ] ", a[ptr],a[ptr+1]);

         // check if next number is lesser than current no
         //   swap the numbers. 
         //  (Bubble up the highest number)
			
         if(a[ptr] > a[ptr+1])
         {
            temp = a[ptr];
            a[ptr] = a[ptr+1];
            a[ptr+1] = temp;

            swapped = true;
          //  printf(" => swapped [%d, %d]\n",a[ptr],a[ptr+1]);
         } 
         else
         {
         //    printf(" => not swapped\n");
         }
			
      }

      // if no number was swapped that means 
      //   array is sorted now, break the loop. 
      if(!swapped) {
         break;
      }
      
   //   printf("Iteration %d#: ",(i+1)); 
      display(a,n);
   }
}
int main()
{ 
  
    int length,i;
    printf("PROGRAM FOR BUBBLE SORT\n");
    printf("Enter the no. of element \n");
    scanf("%d",&length);
    int A[length];
    printf("Enter the element in Unsorted array");
    for(i=0; i<length; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("The unsorted array is : ");
    display(A,length);
    bubbleSort(A,length);
    display(A,length);
    return 0;
}

