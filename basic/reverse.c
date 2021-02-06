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
    printf("the number that you want to reverse");
    scanf("%d",&n);
    printf("The reverse number is %d",reverseNum(n));
    return 0;
}