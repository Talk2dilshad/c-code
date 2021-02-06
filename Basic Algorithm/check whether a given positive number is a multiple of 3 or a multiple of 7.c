/*
ALGORITHM>>>
START 
declare variable n
read n
create function(check)
passing the value to function check 
print the result 
stop
*/

#include <stdio.h>
#include <stdlib.h>
int check(int n);
int main()
{
    int n;
    printf("Enter the Number to check is it multiple of 3&7 : ");
    scanf("%d",&n);
    printf("\n%d",check(n));

}
int check(int n)
{
    return n%3==0 || n%7==0;
}