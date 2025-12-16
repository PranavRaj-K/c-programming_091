#include<stdio.h>
int rev(int a);
int main()
{
	int x;
	printf("enter a three digit number to find the reverse of");
	scanf("%d",&x);
	rev(x);
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
	printf("%d",s);
	return s;
}
