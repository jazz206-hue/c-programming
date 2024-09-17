#include<stdio.h>
void main()
{
float a;
printf("enter the units used");
scanf("%f",&a);
if(a<=50)
{
printf("the bill is %f",a*0.5+(a*0.5)*0.2);
}
else if(a>50&&a<=150)
{
printf("the bill is %f",25+(a-50)*0.75+(25+(a-50)*0.75)*0.2);
}
else if(a>150&&a<=250)
{
printf("the bill is %f",100+(a-150)*1.2+(100+(a-150)*1.2)*0.2);
}
else 
{
printf("the bill is %f",220+(a-250)*1.5+(220+(a-250)*1.5)*0.2);
}
}
