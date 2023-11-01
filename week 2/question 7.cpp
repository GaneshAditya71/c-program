#include<stdio.h>
int main()
{
 	int a,b,c,d,e,f;
 	printf("enter the marks of physics,chemistry,biology,mathematics,computer \n");
 	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 	
 	f=(a+b+c+d+e)/5;
 	if(f>=90)
 	printf("grade is A");
 	else if(f>=80 && f<90)
 	printf("grade is B");
 	else if(f>=70 && f<80)
 	printf("grade is C");
 	else if(f>=60 && f<70)
 	printf("grade is D");
 	else if(f>=40 && f<60)
 	printf("grade is E");
 	else if(f<=40)
 	printf("grade is F");
 	
 	
 	
 	
	return 0;
}
