#include<stdio.h>
int main()
{
	int sub[6],i,sum=0;
	printf("enter the marks of 6 subjects \n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&sub[i]);
	}
	for(i=0;i<6;i++)
	{
		sum=sum+sub[i];
	}
	printf("%d",sum);
	return 0;
}
