#include <stdio.h>
int main()
{
    int n1, n2, i,LCM, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
            LCM = (n1*n2)/gcd;
    }

    printf("G.C.D of %d and %d is %d \n", n1, n2, gcd);
    printf("L.C.M of %d and %d is %d", n1, n2, LCM);
    return 0;
}