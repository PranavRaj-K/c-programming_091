#include<stdio.h>
int main()
{
	int i,n,j,count=0
	;
	printf("enter a number\t");
	scanf("%d",&j);
	for(n=1;n<=j;n++)
	{
	 for(i=1;i<=n;i++)
	 {
		if(n%i==0)
		{
			count++;
		}	
	 }
	 if(count==2) 
	 printf("%d\n",n);
    }
	return 0;
}
