#include<stdio.h>

void main()
{
	float money,in,i,p1,p,r,t;
	
	printf("input the value of the principle amount: ");
	scanf("%f",&p);
	printf("input the rate of interest per year: ");
	scanf("%f",&r);
	printf("input the number of years that the interest is to be calculated for: ");
	scanf("%f",&t);
	i=1;
	p1=p;
	do
	{
		money=p*r/100;
		p+=money;
		i++;
	}
	while(i<=t);
	
	in=p-p1;
	printf("the interest is: %f",in);
}
