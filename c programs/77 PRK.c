#include<stdio.h>
int multiply (int a, int b)
{
	if(b==1)
	{
		return a;
	}
	else
	{
		return a + multiply(a,b-1);
	}
}
int main()
{
	int x,y;
	printf("Enter Two Numbers To multiply \n ");
	scanf("%d%d",&x,&y);
	printf("The Result is : %d",multiply(x,y));
	return 0;
}
