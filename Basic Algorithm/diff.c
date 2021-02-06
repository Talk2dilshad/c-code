/*
Write a C program to get the absolute difference between n and 51.
If n is greater than 51 return triple the absolute difference.

ALGORITHM...
Start
declare variable n
check the input is less or greater than 51
if less than 51 
then print the difference between them
if greater than 51
then print the tripple amount of difference between them
Stop.
*/

#include<stdio.h>
int main()
{

int n;
printf("Enter the number to find the difference ");
scanf("%d",&n);

printf("%d",calculation(n));

return 0;
}
int calculation(int n)
{
    const int x=51;
    if(n>x)
    {
        return (n-x)*3;
    }
    return(x-n);
}