#include<stdio.h>
int main()
{
    int base,pwr,result;
    printf("enter the base and power");
    scanf("%d %d",&base,&pwr);
    result= pow(base,pwr);
    printf(" %d to power %d is %d",base,pwr,result);
    return 0;
    
}