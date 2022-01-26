#include<stdio.h>
#include<unistd.h>
int main() 
{ 
int id,n,i; 
	printf("\nEnter the no. of sub-intervals: ");
	printf("Give the value of n:");
scanf("%d",&n);
for(i=0;i<n;++i) 
{ 
id=fork(); 
} 
return 0; 
}