#include <stdio.h>
int main()
{
	int a,b;
	printf("enter any two values");
	scanf("%d",&a);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the two numbers are %d %d"+a,+b);
return 0;
}
