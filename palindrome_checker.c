#include<stdio.h>
void main()
{
	int num,temp,pall=0,j=10,i=1;
	printf("input a number:  ");
	scanf("%d",&num);
	temp=num;
	while(num>10)
	{
		i=i*10;
		num=num/10;
	}
	num=temp;
	
	while(i!=0)
	{
		pall+=i*(num%10);
		num=num/10;
		i/=10;
				
	}
	if(pall==temp)
	{
		printf("the given number is a palindrome !!");
		
	}
	else
	{
		printf("the given number is not a palindrome");
	}
}
