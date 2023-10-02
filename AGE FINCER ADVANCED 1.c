#include<stdio.h>
#include<string.h>
int main()
{
	
char a[23],b[23];
	printf("enter your half name ");
	gets(a);
	printf("enter your remaing name");
	gets(b);
	strcat(a,b);
	printf("WELCOME %s TO AGE FINDER APP!!!\n\n\n",a);
	printf("=> now add 1 to your age \n\n\n=>now subract2 from your age \n\n\n=>now add 16 to your age\n\n\n");
	printf("=>enter the number you get\n\n ");
	int age;
	scanf("%d",&age);
	age=age-15;
	printf("your age is %d!!!!\n\n\n",age);
	printf("THANKS FOR DOWLOADING THE APP\n\nVERION 1.1\n\nDEVELOPED BY:R.RAGUL RAJ&M.U.KUGAN\n\n\nCLICK ENTER TO EXIT THE APP");
}


















