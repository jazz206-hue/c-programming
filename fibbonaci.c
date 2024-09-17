#include<stdio.h>
void main()
{
int i,a,b,c,d;
a=0;
b=1;
printf("enter the limit");
scanf("%d",&d);
printf("%d,%d,",a,b);
for(i=3;i<=d;i++)
{
c=a+b;
printf("%d,",c);
a=b;
b=c;
}
}