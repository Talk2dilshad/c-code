/*
SUM , DIFFERENCE ,MULTIPLICATION ,TRANSPOSE OF MATRICS...

BY MD DILSHAD ALAM
*/

#include <iostream>
using namespace std;

class Matrix
{
    int First_Matrix[10][10], Second_Matrix[10][10], product_matrix[10][10], difference_matrix[10][10],
    Sum_matrix[10][10],transpose_matrix[10][10];

    int x,y,i,j;  // row->x, col -> y as represented

    public:
    void values();
    void sum();
    void difference();
    void product();
    void transpose();
};
void Matrix::values()
{
    cout<<"Enter the no. of Rows";cin>>x;
    cout<<"Enter the no. of Columns "; cin>>y;
    cout<<"Enter Element of first matrix\n\n";

    for(i=1; i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cin>> First_Matrix[i][j];  
        }
    }

    cout<<"Enter element of second matrix\n\n";
    for(i=1; i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            cin>> Second_Matrix[i][j];         
        }
    }
}
void Matrix::sum()
{
    cout<<"Sum of two matrix : \n";
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            Sum_matrix[i][j]=First_Matrix[i][j]+Second_Matrix[i][j];
            cout<< Sum_matrix[i][j] << " ";     
        }
        cout<<endl;
    }

}
void Matrix::difference()
{
    cout<<"Difference of two matrix : \n";
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=y;j++)
        {
            difference_matrix[i][j]=First_Matrix[i][j]-Second_Matrix[i][j];
            cout<< difference_matrix[i][j] << " "; 
        }
        cout<<endl;
    }
}
void Matrix::product()
{
    cout<<"Product of Matrix :\n";
    for(i=1;i<=x;i++)
    {
       for(j=1;j<=y;j++)
       {
           product_matrix[i][j]=0;
           for(int k=1;k<=y;k++)
           {
             product_matrix[i][j]+= First_Matrix[i][k] * Second_Matrix[k][j];
           }
           cout<<product_matrix[i][j]<<" ";
       }
       cout<<endl;
    }
}

void Matrix :: transpose()
{
       cout << "transpose of the matrix is\n";
        for ( i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                transpose_matrix[i][j] = First_Matrix[j][i];
                cout << transpose_matrix[i][j] << " ";
            }
            cout << endl;
        }

         cout << "transpose of the 2nd matrix is\n";
        for ( i=1; i<=x; i++)
        {
            for ( j=1; j<=y; j++)
            {
                transpose_matrix[i][j] = Second_Matrix[j][i];
                cout << transpose_matrix[i][j] << " ";
            }
            cout << endl;
        }
}
// MENU DRIVEN PROGRAM
int main()
{
    
}