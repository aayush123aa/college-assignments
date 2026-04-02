/*

WAP to develop a calculator for the following:
	sum
	difference
	product
	division
the program should display a menu for taking choice from the user. all the operations must be in the form of functions


*/


#include<stdio.h>

int add(int a, int b);
int diff(int a, int b);
int pro(int a, int b);
int div(int a, int b);

void main()
{
	int choice, a,b;
	printf("input any two numbers of your choice: \n");
	scanf("%d %d",&a,&b);
	
	
	printf("what do you wish to do?\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("the addition of the numbers is: %d",add(a,b));
			break;
		case 2:
			printf("the difference of the numbers is: %d",diff(a,b));
			break;
		case 3:
			printf("the product of the numbers is: %d",pro(a,b));
			break;
		case 4:
			printf("the division of the numbers is: %d",div(a,b));
			break;
		default:
			printf("error");
			break;
	}	
}


int add(int a, int b)
{
	return a+b;
}

int diff(int a, int b)
{
	return a-b;
}

int pro(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}
