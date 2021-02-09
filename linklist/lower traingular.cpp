#include <iostream>
using namespace std;

class lower_Tri
{
 private :
 int *A;
 int n;
 public:
 lower_Tri(int n)
 {
     this->n=n;
     A=new int[n*(n+1)/2];
 }
 ~lower_Tri()
 {
     delete []A;
 }
 void set(int i,int j,int x);
 int get(int i,int j);
 void Display();
 
};
void lower_Tri::set(int i,int j,int x)
{
    if(i>=j)
    A[i*(i-1)/2+j-1]=x;
//* column major n*(j-1)-(j-2)*(j-1)/2+i-j
}

int lower_Tri:: get(int i,int j)
{
  if(i>=j)
  return  A[i*(i-1)/2+j-1];
//* column major n*(j-1)-(j-2)*(j-1)/2+i-j
  return 0;
}
void lower_Tri :: Display()
{
    for (int i = 1; i <=n; i++)
    {
     for(int j=1; j<=n; j++)
     {
       if(i>=j)
        cout<<A[i*(i-1)/2+j-1]<<" ";
//* column major n*(j-1)-(j-2)*(j-1)/2+i-j
       else
       {
           cout<<"0 ";
       }
       
     }
     cout<<endl;
    }
    
}

int main()
{
    int dimension,x;
    cout<<"Enter Dimension";
    cin>>dimension;
    lower_Tri mx(dimension);
    for(int i=1;i<=dimension;i++)
    {
        for(int j=1; j<=dimension; j++)
        {
            cin>>x;
            mx.set(i,j,x);
        }
    }
  mx.Display();
  return 0;
}