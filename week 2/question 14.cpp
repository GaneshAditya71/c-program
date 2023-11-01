#include<stdio.h>
int main()
{
 	char ch;
 	printf("enter a alphabet:");
 	scanf("%c",&ch);
 	
 	if(ch>='a' && ch<='z')
 	printf("input alphabet is lowercase");
 	else if(ch>='A' && ch<='Z')
 	printf("input alphabet is uppercase");
 	
 	
 	
	return 0;
}
