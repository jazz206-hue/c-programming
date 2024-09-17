#include<stdio.h>
void main()
{
int i,a;
printf("enter the limit");
scanf("%d",&a);
for(i=1;i<=a*2;i++)
{
if(i%2==0)
{
printf("%d,",i);
}
}
}