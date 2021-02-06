#include <stdio.h>
struct Distance
{
    int feet;
    float inches;
}dis1,dis2,sum;

int main()
{
    printf("1st distance \n");
    printf("Enter the feet : ");
    scanf("%d",&dis1.feet);

    printf("Enter the inches : ");
    scanf("%f",&dis1.inches);

    printf("2nd Distance \n");
    printf("Enter the feet : ");
    scanf("%d",&dis2.feet);

    printf("Enter the inches : ");
    scanf("%f",&dis2.inches);

    sum.feet = dis1.feet+dis2.feet;
    sum.inches = dis1.inches+dis2.inches;

    //coverting inches to feet if greater than 12

    while (sum.inches >= 12)
    {
       ++sum.feet;
       sum.inches = sum.inches - 12;
    }
    
    printf("The distance is %d\'-%.1f\" ",sum.feet,sum.inches);
    return 0;
}