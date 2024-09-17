#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e;
printf("enter the values of a,b,c of ax^2+bx+c=0 to find the roots of equation");
scanf("%f%f%f",&a,&b,&c);
e=(-b+sqrt(b*b-4*a*c))/2*a;
d=(-b-sqrt(b*b-4*a*c))/2*a;
printf("the roots of the equation are\n %f\n%f",c,d);
}