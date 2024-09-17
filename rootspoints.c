#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the coefficients a,b,c for ax^2+bx+c");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0)
{
printf("the eq has equal roots\n");
printf("points scored are 0");
}
else if(d>0)
{
printf("the roots are real and distinct\n");
printf("the points scores are 20");
}
else
{
printf("the roots are imaginary\n");
printf("the points scores are 10");
}
}