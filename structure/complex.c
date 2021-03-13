#include<stdio.h>        
struct complex           //structure for complex number
{
	double real,imag;     //variables holding real and imaginary part of type double
};
void Add(struct complex x,struct complex y)
{
    struct complex c;
    c.real=x.real+y.real;     //addition of real part
	c.imag=x.imag+y.imag;     //addition of imaginary part
	printf("Sum of complex numbers: %.2lf%+.2lfi\n",c.real,c.imag);
}
void substract(struct complex x,struct complex y)
{
    struct complex c;
    c.real=x.real-y.real;     //subtraction of real part
	c.imag=x.imag-y.imag;     //subtraction of imaginary part
	printf("Substraction of complex numbers: %.2lf+%.2lfi\n",c.real,c.imag);
}
void multiply(struct complex x,struct complex y)
{
    struct complex c;
    c.real=x.real*y.real-x.imag*y.imag;     
	c.imag=x.imag*y.real+x.real*y.imag;     
	printf("Multiplication of complex numbers: %.2lf+%.2lfi\n",c.real,c.imag);
}
int main()
{
	struct complex x,y;
	printf("enter the value of x and y for first complex number: ");
	scanf("%lf%lf",&x.real, &x.imag);
	printf("enter the value of x and y for second complex number: ");
	scanf("%lf%lf",&y.real, &y.imag);
	Add(x,y);
    substract(x,y);
	multiply(x,y);
	return 0;
}