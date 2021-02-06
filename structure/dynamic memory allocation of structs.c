#include <stdio.h>
#include <stdlib.h>
struct person
{
    int age;
    char name[50];
};
//create pointer 
//allocate memeory for pointer
//initialize loop to take input 
//print the result
int main()
{
    struct person *ptr;
    int n,i;

    printf("Enter the number of student : ");
    scanf("%d",&n);

    ptr= (struct person*) malloc(n*sizeof(struct person));
    for ( i = 0; i < n; ++i)
    {
        printf("Enter name & age respectively : ");
        scanf("%s",&(ptr+i)->name);
        scanf("%d",&(ptr+i)->age);
    }
    printf("Display information ");
    for ( i = 0; i <n; ++i)
    {
     printf("Name %s \t Age %d\n",(ptr+i)->name,(ptr+i)->age);
    }
    return 0;
}