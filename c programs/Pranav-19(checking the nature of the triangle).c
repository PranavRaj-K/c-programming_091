#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the sides of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)&&(b==c)&&(c==a))
	{
		printf("the given triangle is a equilateral triangle");
	}
	else if((a==b)||(b==c)||(c==a))
	{
		printf("the given triangle is an isosceles triangle");
	}
	else 
	{
		printf("the given triangle is a scalene triangle");
	}
	return 0;
}
