#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter any 5 values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the five values are \n");
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
