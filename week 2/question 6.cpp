#include<stdio.h>
int main()
{
 	int a,b,c;
 	printf("enter the three numbers:");
 	scanf("%d %d %d",&a,&b,&c);
 	
 	if(a>b)
 	{
 		if(b>c)
 		printf("%d",a);
 		else if(b<c)
 		{
 			if(c>a)
 			printf("%d",c);
 			else
 			printf("%d",a);
		 }
	 }
 	else if(a<b)
 	{
 		if(b<c)
 		printf("%d",c);
 		else if(b>c)
 		printf("%d",b);
	 }
 	
 	
	return 0;
}
