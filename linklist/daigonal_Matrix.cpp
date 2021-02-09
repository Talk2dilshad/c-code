#include <iostream>
using namespace std;

class daigonal_Matrix
{
private:
    int *A;
    int n;

public:
    daigonal_Matrix()
    {
        n=2;
        A=new int[2];
    }
    daigonal_Matrix(int n)
    {
        this->n=n;
        A=new int[2];
    }

    ~daigonal_Matrix()
    {
      delete []A;
    }
    void Set(int i,int j,int x);
    int Get(int i,int j);
    void Display();
};

void daigonal_Matrix::Set(int i,int j,int x)
{
  if(i==j)
  A[i-1]=x;
}

int daigonal_Matrix::Get(int i,int j)
{
    if(i==j)
      return A[i-1];
    return 0;
}
void daigonal_Matrix :: Display()
{
    for(int i=0;i<n;i++)
    {
        for ( int j = 0; j < n; j++)
        {
           if(i==j)
              cout<<A[i]<<" ";
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
    daigonal_Matrix d(4);
    d.Set(1,1,5);
    d.Set(2,2,8);
    d.Set(3,3,9);
    d.Set(4,4,12);
    d.Display();
    return 0;
}