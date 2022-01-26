#include<stdio.h>
#include <math.h>
 
// Function to calculate f(x)
float func(float x)
{
    return log(x);
}
 
// Function for approximate integral
float simpsons_(float ll, float ul, int n)
{
    // Calculating the value of h
    float h = (ul - ll) / n;
 
    // Array for storing value of x and f(x)
    float x[10], fx[10];
 
    // Calculating values of x and f(x)
    for (int i = 0; i <= n; i++) {
        x[i] = ll + i * h;
        fx[i] = func(x[i]);
    }
 
    // Calculating result
    float res = 0;
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n)
            res += fx[i];
        else if (i % 2 != 0)
            res += 4 * fx[i];
        else
            res += 2 * fx[i];
    }
    res = res * (h / 3);
    return res;
}
 
// Driver program
int main()
{
    float lower_limit = 0; // Lower limit
    float upper_limit = 1; // Upper limit
    int n = 6; // Number of interval
	float result = simpsons_(lower_limit, upper_limit, n);
    printf("\nValue of the integration is %f",result);
    return 0;
}