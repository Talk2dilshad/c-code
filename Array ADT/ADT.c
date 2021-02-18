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
//Append_func()
void append_func(struct Array *arr,int x)
{
  if(arr->length<arr->size)
  arr->Ar[arr->length++]=x;
}
//Insert Func()
void insert(struct Array *arr,int index,int x)
{
  if(index>=0 && index <= arr->length)
  {
      for(int i=arr->length;i>index;i--)
      {
        arr->Ar[i]=arr->Ar[i-1];
      }
      arr->Ar[index]=x;
      arr->length++;
  }
}
//Func().Del
int Delete(struct Array *arr,int index )
{
  int i,x=0;
  if(index>=0 && index<=arr->length)
  {
    x=arr->Ar[index];
    for(i=index;i<arr->length-1;i++)
    {
      arr->Ar[i]=arr->Ar[i+1];
    }
    arr->length--;
    return x;
  }
  return 0;
}
//Swaping Func()
void swap(int *x,int *y)
{
  int temp=*x;
  *x = *y;
  *y=temp;
  
}
//Linear Search
int linearSearch(struct Array *arr,int key)
{
  for (int i = 0; i < arr->length; i++)
  {
    if(key==arr->Ar[i])
    {
    swap(&arr->Ar[i],&arr->Ar[i-1]);
    return i;
    }
  }
  return -1;
  
}

//Binary search by Recursion 

int binarySearch(int a[],int l,int h,int key)
{
  int mid=0;
  if(l <= h)
  {
    mid=(l+h)/2;
    if(key==a[mid])
    return mid;
    else if(key<a[mid])
    return binarySearch(a,l,mid-1,key);
    else
    return binarySearch(a,mid+1,h,key);
  }
  return -1;
}

//Let's code reversing
void Reverse(struct Array *arr)
{
    int i,j;
    for(i=0;j=arr->length-1;i<j,i++,j--)
    {
        swap(&arr->Ar[i],&arr->Ar[j]);
    }
}
//FIND MISSING ARRAY IN SORTED METHOD 1
void MissingElement(struct Array arr)
{
  int difference=arr.Ar[0];
  for (int i = 0; i < arr.length; i++)
  {
    if(arr.Ar[i]-i != difference)
    {
      while(difference<arr.Ar[i]-i)
      {
      printf("Missing Element : %d\n",i+difference);
      difference++;
      }
    }
  }
  
}
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
int Min(struct Array arr)
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

//Find Missing Element in unsorted array METHOD 2
void Unsorted_element_missing(struct Array arr)
{
  int i;
  int low=Min(arr);
  int high=Max(arr);
  int arr2[high];
  for ( i = 0; i < high+1 ; i++)
  {
    arr2[i]=0;
  }
  
  for(i=0;i<arr.length;i++)
  {
    arr2[arr.Ar[i]]++;
  }
  printf("Missing Element : ");
  for ( i = low; i <= high; i++)
  {
    if(arr2[i] == 0)

    printf("%d ",i);
  }
  printf("\n");//Method 2 END HERE 
  //FINDING DUPLICATE ELEMENT
  printf("Duplicate Element : \n");
  for(i=low;i<=high;i++)
  {
   if(arr2[i]>1)
    {
    printf("%d-> %d \n",i,arr2[i]);
    }
  }
  printf("\n");
}
void pair_of_element(struct Array arr,int sum)
{
  int i;
  int k=sum;
  int low=Min(arr);
  int high=Max(arr);
  int arr2[high];//Array[] is initialized to 0
  for ( i = 0; i < high+1 ; i++)
  {
    arr2[i]=0;
  }
  for(i=0;i<arr.length;i++)
  {
    arr2[arr.Ar[i]]++;
  }
  for(i=0;i<arr.length;i++)
  {
    if(arr2[k-arr.Ar[i]]==1)
    {
      printf("%d + %d = %d\n",arr.Ar[i],k-arr.Ar[i],sum );
    }
  }

}


int main()
{
    struct Array arr={{6,3,8,10,16,7,5,2,9,14},10,10};
  // append_func(&arr,12);
  // insert(&arr,5,11);
  //  MissingElement(arr);
  //  printf("%d\n",Delete(&arr,4));
  //  printf("%d\n",linearSearch(&arr,3));
//InOrder to work binary search some func() like delete.fun(),linearSearch.func() won't work
 //   printf("%d\n",binarySearch(arr.Ar,0,arr.length,5));
   // Unsorted_element_missing(arr);
    pair_of_element(arr,10);
    display(arr);
    return 0;
}