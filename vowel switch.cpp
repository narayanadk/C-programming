#include<stdio.h>
int main()
{
	char character;
	printf("enter any character\t");
	scanf("%c",&character);
	switch(character)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("vowel");
			break;
		default:
			printf("consonant");
			break;
	}
	return 0;
}
