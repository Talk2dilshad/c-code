/*Approach:
* Get the two Strings to be concatenated
*Declare a new Strings to store the concatenated String
*Insert the first string in the new string
*Insert the second string in the new string
*Print the concatenated string
*/

#include <stdio.h>
int main()
{ // initializing string 1,2;

    char str1[100]="Hi ",str2[100]="Dilshad";
    int i=0,j=0;
       
    printf("enter the 1st string : ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the 2nd string : ");
    fgets(str2,sizeof(str2),stdin);
    
     //intializing string 3 to 0
    char str3[100];
    j=0;
  // storing strings1 to empty new strings
    for ( i = 0; str1[i] != '\0'; i++,j++)
    {
       str3[j]=str1[i];
    }
    i=0;
    while ( str2[i] !='\0')
    {
       str3[j]=str2[i];
       i++;
       j++;
    }
        str3[j]='\0';
          // Print the concatenated string 
    printf("\nConcatenated string: %s", str3); 
  
        return 0;
}