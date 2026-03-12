#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,disc,r1,r2;
	
	printf("input the a, b and c values of the ax2+bx+c=0 equation:\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("the equation is: %dx2 + %dx + %d\n",(int)a,(int)b,(int)c);
	disc=b*b-4*a*c;
	if(disc<0)
	{
		printf("the roots are imaginary");
	}
	else
	{
		r1=(-b+sqrt(disc))/2*a;
		r2=(-b-sqrt(disc))/2*a;
		printf("the roots of the equation are:\nroot1 = %f \nroot2= %f",r1,r2);
	}
}
