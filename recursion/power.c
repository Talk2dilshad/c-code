#include <stdio.h>
int power( int base, int p);
int main()
{
    int base, p, result;
    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter power number(positive integer): ");
    scanf("%d", &p);

    result=power(base,p);
    printf("%d^%d=%d",base,p,result);
    return 0;
}
int power(int base, int p)
{
    if(p!=0)
    {
        return(base*(power(base,p-1)));
    }
    else
    return 1;
}