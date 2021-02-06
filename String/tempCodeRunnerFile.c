#include <stdio.h>
#include <string.h>
void isPalindrome(char str[])
{
  //start from leftmost and rightmost
  int l=0;
  int h=strlen(str)-1;
    // Keep comparing characters while they are same 
	while(h>l)
	{
		if(str[l++] != str[h--])
		{
			printf("NO");
			return;
		}
		else
		 printf("YES");
	}
}
int main()
{
	char str[50];
	scanf("%c",str);
	isPalindrome(str);
return 0;
}