#include<stdio.h>
#include<string.h>
void main()
{
	char str[50],rev[50],i=0,length=0;
	printf("input a string: ");
	fflush(stdin);
	fgets(str, 50, stdin);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		rev[i]=str[length-i-1];
	}
	printf("the reverse of your string is: %s",rev);
	
}
