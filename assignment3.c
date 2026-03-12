#include<stdio.h>

struct bill
{
	char name[20];
	int id, unit;
}charge;

void main()
{
	float amount,surcharge,c;
	printf("input the name of the customer:\t");
	scanf("%s",&charge.name);
	printf("input the customer id of the customer:\t");
	scanf("%d",&charge.id);
	printf("input the units consumed by the customer:\t");
	scanf("%d",&charge.unit);
	
	if(charge.unit<200)
	{
		c=1.2;
		amount=charge.unit*c;
		
	}
	else if(charge.unit>=200 && charge.unit <400)
	{
		c=1.5;
		amount=charge.unit*c;
	}
	else if(charge.unit>=400 && charge.unit< 600)
	{
		c=1.8;
		amount = charge.unit*c;
		if(charge.unit>400)
		{
			surcharge=0.15*amount;
		}
	}
	else
	{
		c=2.00;
		amount=charge.unit*c;
		surcharge=0.15*amount;
	}
	
	if(amount<100)
	{
		amount=100;
	}
	
	printf("Customer ID: %d\n",charge.id);
	printf("Customer Name: %s\n",charge.name);
	printf("Unit Consumed: %d\n",charge.unit);
	printf("Amount Charges @ Rs. %f per unit: Rs. %f\n",c,amount);
	printf("Surcharge: %f\n",surcharge);
	printf("Net Amount Paid By the Customer: Rs.%f\n",amount+surcharge);
}
