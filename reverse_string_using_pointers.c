/*
WAP to print string in reverse order using pointers
*/

#include<stdio.h>
#include<string.h>

void main()
{
	char str[30],*ptr;
	int i,len;
	
	printf("input a string: ");
	fgets(str, sizeof(str), stdin);
	ptr=str;
	
	while(*ptr!='\0')
	{
		ptr++;
	}
	
	ptr--;
	
	printf("the reverse of the input string is: \n");
	
	while(ptr>=str)
	{
		printf("%c", *ptr);
		ptr--;
	}
	
	
}

