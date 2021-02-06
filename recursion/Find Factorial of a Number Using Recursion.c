#include<stdio.h>
int recursion(int n);
int main()
{
    int n;
    printf("Enter the positive integer");
    scanf("%d",&n);
    printf("The Factorial of %d is %d",n,recursion(n));
    return 0;
}
int recursion(int n)
{
 if(n>1)
 return n*recursion(n-1);
 else
 return 1;
}