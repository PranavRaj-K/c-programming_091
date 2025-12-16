#include<stdio.h>
int add (int a,int b);
int main()
{
	int x,y,res;
	printf("enter two values to add");
	scanf("%d%d",&x,&y);
	res = add(x,y);
	printf("the sum of the two numbers is %d",res);
	return 0;
}
int add (int a,int b)
{
	int c;
	c= a+b;
	return c;
}
