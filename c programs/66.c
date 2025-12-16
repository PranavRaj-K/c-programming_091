#include<stdio.h>
int rev(int a);
int main()
{
	int x,p;
	printf("enter a three digit number to find the reverse of");
	scanf("%d",&x);
	p = rev(x);
	if(p==x)
	{
		printf("the given number is a palindrome number");
	}
	else
	{
		printf("the given number is not a palindrome number");
	}
	return 0;
}
int rev(int a)
{
	int r,s=0;
	while(a!=0)
	{
		r=a%10;
		s=(s*10)+r;
		a=a/10;
	}
	printf("%d\n",s);
	return s;
}
