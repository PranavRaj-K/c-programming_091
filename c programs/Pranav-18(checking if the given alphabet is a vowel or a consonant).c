#include<stdio.h>
int main()
{
	char alp;
	printf("enter the alphabet");
	scanf("%char",&alp);
	if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u')
	{
		printf("the given letter is a vowel");
	}
	else printf("the given letter is a consonant");
	return 0;
}
