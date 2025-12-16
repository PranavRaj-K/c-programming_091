#include<stdio.h>
int main()
{
	int n,m,o,d,count=0;
	printf("enter a value");
	scanf("%d",&d);
	n=0;
	m=1;
	for(count=0;count<=d-2;count++)
	{
		o=n+m;
		n=m;
		m=o;
		printf("%d\n",o);
	}
	return 0;
}
