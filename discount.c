#include<stdio.h>
void main()
{
float a;
printf("enter the bill amount");
scanf("%f",&a);
if(a>0&&a<=1000)
{
printf("amount after discount is %f",a-a*0.05);
}
else if(a>=1001&&a<=5000)
{
printf("amount after discount is %f",a-a*0.1);
}
else
{
printf("amount after discount is %f",a-a*0.2);
}
}