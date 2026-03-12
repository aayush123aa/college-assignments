#include<stdio.h>

void main()
{
	char check;
	printf("input a character:\t");
	scanf("%c",&check);
	
	if((97<=check && check<=122) || (65<=check && check<=90))
	{
		printf("the test character is an alphabet.");
	}	
	else if(check>=48 && check <=57)
	{
		printf("the character is a number.");
	}
	else
	{
		printf("the test character is a special number.");
	}
}
