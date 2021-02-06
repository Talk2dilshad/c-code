/*  Write a C program to check two given integers,
 and return true if one of them is 30 or if their sum is 30

ALGORITHM>>>

START
declare variable x,y
check given two integer is greater than 30
if it less than 30 then sum the input 
if greater than 30 then return true
else false
STOP

*/

#include<stdio.h>
int test(int x,int y);
int main(void)
{
    printf("%d",test(25, 5));
    printf("\n%d",test(20, 30));
    printf("\n%d",test(20, 25));
    
}
int test(int x,int y)
{
    return  x== 30 || y== 30 || ( x + y== 30) ;
}

