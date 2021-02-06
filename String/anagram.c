/*
*1 Step: Declare two Strings.

*2 Step: Find out the length of two Strings (Strings are not anagram 
*        if the length of strings is not the same).

*3 Step: Even if the lengths are equal the two strings should be in 
*        lowercase because it makes easy to check.

*4 Step: After converting character ,count character of array.

*5 Step: In the last step, the Anagram is checked.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_Anagram(char a[],char b[]);

int main()
{
    char a[1000];char b[1000];
    printf("Enter the two strings respectively\n");
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
   /* if(strlen(a) != strlen(b))
    {
      printf("Strings are not Anagram");
    } */
    if(check_Anagram(a,b))
    {
     printf("Strings are Anagram");
    }
    else
    {
      printf("Strings are not Anagram");
    }
    return 0;
}
int check_Anagram(char a[],char b[])
{
   int first[26]={0}, second[26]={0}, c=0;

//* count the character in the first string
   while(a[c] != '\0')
    {
     first[a[c]-'a']++;
     c++;
    }
    
//* Reset counter to 0 :)
    c=0;

   while(b[c] != '\0')
   {
    second[b[c]-'a']++; 
    c++;
   }
//*  comparing the frequency 
    for ( c = 0; c < 26; c++)
    {
      if(first[c] != second[c])
      {
       return 0;
      }
      
    }
     return 1;
}