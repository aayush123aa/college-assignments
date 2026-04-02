/*
create the following structure with bit field

	struct personal
	{
	unsigned sex:1;
	unsigned age:7;
	unsigned m_status:1;
	unsigned children:3;
	unsigned:4;
	};
	
	define an alias name for "struct personal" and use the alias name to create 10 employees. catagorize them to male and female employees. find the employees who will be retiring in the next 5 years and have atleast 2 children, given that the age of retirement is 65.

*/

#include<stdio.h>

struct personal
{
	unsigned sex:1,age:7,m_status:1,children:3;
	unsigned:4;
}

typedef struct personal emp;

void main()
{
	int i;
	emp n[10]={{0,20,0,0},{1,62,1,3},{1,62,1,4},{1,25,0,0},{0,27,1,0},{1,34,1,1},{0,34,1,4},{1,28,1,0},{0,25,1,0},{1,62,0,0}};
	
	printf("the male employees are:\n");
	for(i=0;i<10;i++)
	{
		if(n[i].sex==1)
		{
			
		}
	}
	
}















