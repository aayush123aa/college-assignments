#include<stdio.h>

struct complex
{
	float r,i;
} a,b,sum,product;

void main()
{

	printf("input the real part and imaginary part of the 1st complex number:\n");
	scanf("%f %f",&a.r,&a.i);
	
	printf("input the real part and imaginary part of the 1st complex number:\n");
	scanf("%f %f",&b.r,&b.i);
	
	printf("the two complex numbers are:\n %.1f+%.1fi \n %.1f+%.1fi",a.r,a.i,b.r,b.i);
	
	sum.r=a.r+b.r;
	sum.i=a.i+b.i;
	
	product.r=a.r*b.r-a.i*b.i;
	product.i=a.r*b.i+b.r*a.i;
	
	
	printf("\nthe addition of the two complex numbers is: %.1f+%.1fi",sum.r,sum.i);
	printf("\nthe product of the two complex numbers is: %.1f+%.1fi",product.r,product.i);
	
}

