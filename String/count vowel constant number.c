#include <stdio.h>
int main()
{
    char line[150];
    int v,c,n,sp; // v for vowel , c for constant , n for number ,sp for space;
    v=c=n=sp=0;
    
    printf("Enter the line of strings > ");
    fgets(line,sizeof(line),stdin);

    for (int i = 0; line[i] != '\0'; ++i)
    {
     if(     line[i]=='a' || line[i]=='A'|| line[i]=='e'||line[i]=='E' 
          || line[i]=='i' || line[i]=='I'|| line[i]=='o'||line[i]=='O' 
          || line[i]=='u' || line[i]=='U'  ) 
          
          { 
              ++v;
          }
    
    
     else if( (line[i] >='a' && line[i]<='z')
          || (line[i] >='A' && line[i] <='Z'))
      {
          ++c;
      }
    
     else if(line[i] >= '0' && line[i]<= '9')
      {
         ++n;
      }
     else if(line[i]==' ')
      { 
          ++sp;
      }
    }
    printf("Vowels: %d", v);
    printf("\nConsonants: %d", c);
    printf("\nDigits: %d", n);
    printf("\nWhite spaces: %d", sp);
    return 0;
}