#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}
}
int main()
{
	int x;
	printf("Enter The Number You Want To Find The Factorial Of : \n");
	scanf("%d",&x);
	printf("Factorial Of %d Is : %d ",x,fact(x));
	return 0;
}
