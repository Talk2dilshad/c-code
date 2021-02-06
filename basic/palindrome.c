#include<stdio.h>
// user defined reverseNum func()to reverse number
int reverseNum(int num)
{
    int sum=0,rem;
    while (num>0)
    { 
        rem =num%10;
        sum =sum*10+rem;
        num=num/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the integer that you want to check palindrome number or not \n");
    scanf("%d",&n);
    if ( n == reverseNum(n))
    {
        printf("%d is palindrome number",n);
    }
    else
    printf("%d is not a palindrome number ",n);
    return 0;
}