#include<stdio.h>
void fibanocet (int n);
int main()
{
	int a;
	printf("enter n value to print series \n");
	scanf("%d",&a);
	fibanocei(a);
	return 0;
}
void fibanocei(int n)
{
	int f=0,s=1,r;
	printf("the series=\n");
	printf("%d\t%d\t",f,s);
	while((f+s)<=n)
	{
		r=f+s;
		printf("%d\t",r);
		f=s;
		s=r;
	}
}
