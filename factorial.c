#include<stdio.h>
void main()
{
int i,a;
long int b=1;
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
b*=i;
}
printf("%d",b);
}