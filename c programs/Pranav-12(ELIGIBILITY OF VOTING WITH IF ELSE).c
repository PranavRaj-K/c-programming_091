#include<stdio.h>
int main()
{
	int a;
	printf("enter your age");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("the age of person is eligible to vote");
	}
	else printf("the age of person is not eligible to vote");
	return 0;

}
