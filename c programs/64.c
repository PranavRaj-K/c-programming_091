#include<stdio.h>
int sum(int a);
int main()
{
	int x,add;
	printf("enter the number for the sum of its digits");
	scanf("%d",&x);
	add=sum(x);
	printf("sum of the digits of the number is %d",add);
	return 0;
}
int sum(int a)
{
	int r,s=0;
	while(a!=0)
	{
		r=a%10;
		s=s+r;
		a=a/10;
	}
	return s;
}

