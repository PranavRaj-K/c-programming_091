#include<stdio.h>
int main()
{
	float n,d,div;
	printf("enter the value of numerator and denomenator");
	scanf("%f%f",&n,&d);
	if(d!=0)
	{
		div=n/d;
		printf("the output is = %f\n",div);
	}
	else printf("you have entered 0 for denomenator,please try another value");
return 0;
}
