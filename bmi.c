#include<stdio.h>
void main()
{
float a,b,c;
printf("entere the weight of the person");
scanf("%f\n",&a);
printf("entere the height of the person:");
scanf("%f\n",&b);
c=a/(b*b);
if(c<18.5)
{
printf("the person is under weight");
}
else if(c>=18.5&&c<=24.9)
{
printf("the person is normal weight");
}
else
{
printf("the person is over weight");
}
}