#include<stdio.h>
int main() 
{
    int n,cn,rem,r=0;
    printf("Enter the 3 digit number : ");
    scanf("%d",&n);
    cn=n; //copy n
    while (cn!=0)
    {
     rem= cn%10;
        r+=rem*rem*rem;
        cn=cn/10;
    }
    if (r == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}