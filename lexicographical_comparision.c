#include<stdio.h>
#include<string.h>

void main()
{
	char a[20],b[20];
	printf("input string 1: ");
	scanf("%s",a);
	printf("input string 2: ");
	scanf("%s",b);
	
	if(strcmp(a,b)==0)
	{
		printf("the two strings are equal");
	}
	else if(strcmp(a,b)>0)
	{
		printf("the first string is lexicographically greater than the second one ");		
	}
	else
	{
		printf("the first is lexicographically less than the second one");
	}
}
