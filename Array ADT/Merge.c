#include <stdio.h>
#include <stdlib.h>
struct Array 
{
    int Ar[10];
    int length;
    int size;
};
//DISPLAY
void display(struct Array arr)
{ 
  
  printf("Printing element...\n");
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d ",arr.Ar[i]);
  }
  
}
struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length)
  {
    if(arr1->Ar[i]<arr2->Ar[j])
    arr3->Ar[k++]=arr1->Ar[i++];
    else
    arr3->Ar[k++]=arr2->Ar[j++];
  }
  for(;i<arr1->length;i++)
  {
    arr3->Ar[k++]=arr1->Ar[i];
  }
  for(;j<arr2->length;j++)
  {
    arr3->Ar[k++]=arr2->Ar[j];
  }
  arr3->length=arr1->length+arr2->length;
  arr3->size=10;
  return arr3;

}
struct Array* Union(struct Array *arr1,struct Array *arr2)
{
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length)
  {
    if(arr1->Ar[i]<arr2->Ar[j])
    arr3->Ar[k++]=arr1->Ar[i++];
    else if(arr2->Ar[j]<arr1->Ar[i])
    arr3->Ar[k++]=arr2->Ar[j++];
    else
    {
     arr3->Ar[k++]=arr1->Ar[i++];
     j++;    
    }
  }
  for(;i<arr1->length;i++)
  {
    arr3->Ar[k++]=arr1->Ar[i];
  }
  for(;j<arr2->length;j++)
  {
    arr3->Ar[k++]=arr2->Ar[j];
  }
  arr3->length=k;
  arr3->size=10;
  return arr3;

}
struct Array* Intersection(struct Array *arr1,struct Array *arr2)
{
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length)
  {
    if(arr1->Ar[i]<arr2->Ar[j])
    i++;
    else if(arr2->Ar[j]<arr1->Ar[i])
    j++;
    else
    {
     arr3->Ar[k++]=arr1->Ar[i++];
     j++;    
    }
  }
  arr3->length=k;
  arr3->size=10;
  return arr3;

}
struct Array* Difference(struct Array *arr1,struct Array *arr2)
{
  int i,j,k;
  i=j=k=0;
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
  while(i<arr1->length && j<arr2->length)
  {
    if(arr1->Ar[i]<arr2->Ar[j])
    arr3->Ar[k++]=arr1->Ar[i++];
    else if(arr2->Ar[j]<arr1->Ar[i])
    j++;
    else
    {
     i++;
     j++;    
    }
  }
  for(;i<arr1->length;i++)
  {
    arr3->Ar[k++]=arr1->Ar[i];
  }
  arr3->length=k;
  arr3->size=10;
  return arr3;

}

int main()
{
    struct Array arr1={{1,7,5,10,25},5,10};
    struct Array arr2={{3,6,7,10,20},5,10};
    struct Array *arr3;
    arr3=Difference(&arr1,&arr2);
    display(*arr3);
    return 0;
}