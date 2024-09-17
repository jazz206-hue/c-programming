#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d",&a);
if(a%5==0)
{
printf("the %d is divisible by 5",a);
}
else if(a%11==0)
{
printf("the %d is divisible by 11",a);
}
else
{
printf("the %d is not divisible by 5 and 11",a);
}
}