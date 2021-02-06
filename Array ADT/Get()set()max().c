#include <stdio.h>
#include <stdlib.h>
struct Array 
{
    int Ar[10];
    int length;
    int size;
};
void display(struct Array arr)
{ 
  
  printf("Printing element...\n");
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d ",arr.Ar[i]);
  }
  
}
//GET FUNC() IT IS USE TO FIND VALUE BY INDEX
int Get(struct Array arr,int index)
{
    if(index>=0 && index <arr.length)
    return arr.Ar[index];
    
    return -1;
}

//SET FUNC() CHANGE THE VALUE OF GIVEN INDEX
void Set(struct Array *arr,int index,int x)
{
   if(index>=0 && index <arr->length)
   return arr->Ar[index]=x;
}
//MAX.FUNC() IS USE TO CHECK /FIND MAXIMUM VALUE IN AN ARRAY
int Max(struct Array arr)
{
    int i;
    int max=arr.Ar[0];
    for ( i =1; i < arr.length; i++)
    {
        if(arr.Ar[i]>max)
        max=arr.Ar[i];
    }
    return max;
}
void Min(struct Array arr)
{
    int i;
    int min=arr.Ar[0];
    for ( i =1; i < arr.length; i++)
    {
        if(arr.Ar[i]<min)
        min=arr.Ar[i];
    }
    return min;
}
int Sum(struct Array arr)
{
    int i;
    int s=0;
    for ( i = 0; i < arr.length; i++)
    {
       s+=arr.Ar[i];
    }
    return s;
}
float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}
//Swaping Func()
void swap(int *x,int *y)
{
  int temp=*x;
  *x = *y;
  *y=temp;
  
}
//Let's code reversing
void Reverse(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->Ar[i],&arr->Ar[j]);
    }
}
int IscheckSorted(struct Array arr)
{
    for (int i = 0; i < arr.length-1; i++)
    {
        if(arr.Ar[i]>arr.Ar[i+1])
        return 0;
    }
    return 1;
    
}



int main()
{
    struct Array arr={{1,3,5,8,9},5,10};
    printf("%d\n",Get(arr,3));
    printf("%d\n",IscheckSorted(arr));
    Reverse(&arr);
    display(arr);
    return 0;
}