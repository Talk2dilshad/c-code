#include <stdio.h>
#include <math.h>

//Define the function to be integrated 
double intregrate(double x)
{
	return x*x;
}

main()
{
	int sub_interval,i;
	double ub,lb,h,sum=0,x,integral;
	
	printf("\nEnter the no. of sub-intervals: ");
    	scanf("%d",&sub_interval);
	printf("\nEnter the Initial limit :  ");
	scanf("%lf",&ub);

	printf("\nEnter the Final Limit :  ");
	scanf("%lf",&lb);

	// begin trapezoidal method 
	h= fabs(ub-lb)/sub_interval;
	for(i=0; i<sub_interval; i++)
	{
		x = ub+i*h;
		sum = sum + intregrate(x);
	}
	integral = (h/2) * (intregrate(ub)+intregrate(lb)+ 2*sum);
	printf("\nThe integral is : %lf\n",integral);
}