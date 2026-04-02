/*
WAP to print the fibonnacci series using functions recursively.

*/

#include<stdio.h>

int n;
int fib(int a,int b);

void main()
{
	int a=0,b=1;
	printf("how many terms of the fibonnacci series do you wish to obtain? ");
	scanf("%d",&n);
	
	fib(a,b);
}

int fib(int a,int b)
{
	printf("%d ",a);
	--n;
	if(n!=0)
	{
		
		return fib(b, a+b);
	}


	
}
