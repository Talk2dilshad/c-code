#include<stdio.h>
#include<stdlib.h>
//create structure
//define prototype function***
//take input of name & age 
//display by passing struct as fuction
struct student
{
   char name[50];
   int age;
};
//function prototype 
void display(struct student s);

int main()
{
   struct student s1;
   
   printf("Enter name of student : ");
   scanf("%[^\n]%*c",s1.name);

   printf("Enter Age : ");
   scanf("%d",&s1.age);

   display(s1);

   return 0;
}

void display(struct student s)
{
  printf("\nDisplay Information : \n");
  printf("Name : %s",s.name);
  printf("\n Age : %d",s.age);
}