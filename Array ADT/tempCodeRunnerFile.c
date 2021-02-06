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
int main()
{
    struct Array arr={{1,3,5,8,9},5,10};
    printf("%d\n",Get(arr,5));
    display(arr);
    return 0;
}