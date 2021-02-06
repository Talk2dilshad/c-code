#include <stdio.h>
#include<string.h>
int main()
{
    // input data
    char str[100];
    printf("Enter string :");
    scanf("%s",str);
    char ch[50];
    printf("Enter string :");
    scanf("%s", ch);
// print string
    printf("Original String: %s\n", str); 
    printf("Character to be appended: %s\n", ch); 
  
 //append ch to str
 strcat(str,&ch);

  // print string 
    printf("Appended String: %s\n", str); 
  
    return 0; 
} 