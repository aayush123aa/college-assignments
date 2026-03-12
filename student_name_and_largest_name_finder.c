#include<stdio.h>
#include<string.h>
struct student
{
	char name[30];
} n[5];

void main()
{
	int i,leng[5],max;
	printf("input the names of 5 students:\n");
	
	for(i=0;i<5;i++)
	{
		printf("name of student#%d: ",i+1);
		scanf("%s",n[1].name);
	}
	
	for(i=0;i<5;i++)
	{
		leng[i]=strlen(n[i].name);
	}
	
	
	for(i=0;i<5;i++)
	{
		if(leng[i+1]>leng[i])
		{
			max=i+1;
		}
	}
	
	printf("the largerst name is: %s",n[max]);
	
}
