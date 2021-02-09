#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct polynomial
{
    int coeff;
    int exponent;
};
int read(struct polynomial p[])
{
  int total_term;
  cout<<"\nEnter Total No. of Term: ";
  cin>>total_term;
  cout<<"\nEnter the COEFFICIENT and EXPONENT";
  for (int i = 0; i < total_term; i++)
  {
    cout<<"Enter the coefficient("<<i+1<<"):";
    cin>>p[i].coeff;
    cout<<"Enter the exponent("<<i+1<<"):";
    cin>>p[i].exponent;
  }
  return total_term;
}
void Display(struct polynomial p[],int term)
{
  int i;
  for( i=0; i<term-1; i++)
  cout<<p[i].coeff<<"(x^"<<p[i].exponent<<")+";
  cout<<p[i].coeff<<"(x^"<<p[i].exponent<<")";
  cout<<endl;
}
int evaluate(struct polynomial p[],int no_of_term)
{
  int i,x,sum;
  cout<<"Enter the value of x ->";
  cin>>x;
  sum=0;
  for(i=0;i<no_of_term;i++)
  {
    sum += p[i].coeff*pow(x,p[i].exponent);
  }
  cout<<"\nThe resultant value of the polynomial: "<<sum;

}

int main()
{
  struct polynomial p[20];
  int no_of_term;
  cout<<"Enter the polynomial details:";
  no_of_term=read(p);
  cout<<endl;
  cout<<"\nThe polynomial is: ";
  Display(p,no_of_term);
  evaluate(p,no_of_term);
  return 0;
}