/*
define a struct named time_struct with elemnts as int hour, int minute and int second. use the struct to print the time is the format hour:minute:second
also define a function to add two times and show it in appropriate format
*/

#include<stdio.h>

struct time_struct
{
	int hour, minute, second;
}a;

void main()
{
	printf("what time do you wish to print out:\n");
	printf("hour: ");
	scanf("%d",&a.hour);
	printf("minute: ");
	scanf("%d",&a.minute);
	printf("second: ");
	scanf("%d",&a.second);
	
	printf("%d:%d:%d",a.hour,a.minute,a.second);
	
	createtwo();
}

void createtwo()
{
	struct time_struct b,c;
	printf("\ninput the value of the 1st time:\n");
	printf("hour: ");
	scanf("%d",&b.hour);
	printf("minute: ");
	scanf("%d",&b.minute);
	printf("second: ");
	scanf("%d",&b.second);
	
	printf("\ninput the value of the 2nd time:\n");
	printf("hour: ");
	scanf("%d",&c.hour);
	printf("minute: ");
	scanf("%d",&c.minute);
	printf("second: ");
	scanf("%d",&c.second);
	
	printf("the time is: \n %d:%d:%d",((b.hour+c.hour)%24),((b.minute+c.minute)%60),((b.second+c.second)%60));
	
}
