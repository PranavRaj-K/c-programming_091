#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter the desired operator\n");
	scanf("%char",&op);
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case'+' : printf("addition = %d",a+b);
		break;  
		case'-' : printf("subraction = %d",a-b);
		break;
		case'*' : printf("multiplication = %d",a*b);
		break;
		case'/' : printf("division = %d",a/b);
		break;
		case'%' : printf("remainder divison = %d",a%b);
		break;
		default : printf("enter a valid operation");
	}
	return 0;
}
