#include<stdio.h>
int main()
{
 	char ch;
 	printf("enter a alphabet:");
 	scanf("%c",&ch);
 	
 	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='i'||ch=='O'||ch=='U')
 	printf("input alphabet is vowel");
 	else
 	printf("input alphabet is consonant");
 	
 	
 	
	return 0;
}
