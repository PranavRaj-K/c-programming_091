#include<stdio.h>
int main()
{
	char alp;
	printf("enter a alphabet");
	scanf("%c",&alp);
	switch(alp)
	{
		case'a' : printf("the letter is a vowel");
		break;
		case'e' : printf("the letter is a vowel");
		break;
		case'i' : printf("the letter is a vowel");
		break;
		case'o' : printf("the letter is a vowel");
		break;
		case'u' : printf("the letter is a vowel");
		break;
		default : printf("the letter is a consonant");
	}
	return 0;
}
