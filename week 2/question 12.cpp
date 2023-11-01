#include<stdio.h>
int main()
{
 	char ch;
 	printf("enter a character:");
 	scanf("%c",&ch);
 	
 	if(ch>='0'&& ch<='9')
 	printf("input character is digit");
 	else if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
 	printf("input character is alphabet");
 	else 
 	printf("input character is special character");
 	
 	
	return 0;
}
