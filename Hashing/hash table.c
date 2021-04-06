#include <stdio.h>

#include "C:\Users\Windows 8.1\Documents\c\Hashing\chains.h"

int hash(int key)
{
    return key%10;
}
void Insert(struct node *h[],int key)
{
    int index=hash(key);
    SortedInsert(&h[index],key);
}

int main()
{
    struct node *ht[10];
    struct node *searchkey;

    for(int i=0; i<10; i++)
    ht[i]=NULL;

 Insert(ht,12);
 Insert(ht,22);
 Insert(ht,42);
 
 searchkey=search(ht[hash(22)],22);
 
 printf("%d ",searchkey->data);

 return 0;

}