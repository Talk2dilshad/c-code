#include <stdio.h>
#define size 10

int hash(int key)
{
    return key%size;
}
int probe(int h[],int key)
{
    int index=hash(key);
    int i=0;
    while(h[index+i]%size !=0)
    i++;
    return (index+i)%size;
}

void Insert(int h[],int key)
{
    int index=hash(key);
    if(h[index] !=0)//check if there is free space
    index=probe(h,key);
    h[index]=key;

}
int search(int h[],int key)
{
    int index=hash(key);
    int i=0;
    while(h[(index+i)%size] !=key)
    i++;
    return h[index+i]%size;

}
int main()
{
 int ht[10]={0};
 
 Insert(ht,12); 
 Insert(ht,25);
 Insert(ht,35);
 Insert(ht,26);
 printf("Key found at index ==> %d",search(ht,12));
 return 0;
}