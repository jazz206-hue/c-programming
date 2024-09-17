#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&a>c)
{
printf("the maximum is %d",a);
}
else if(b>a&b>c)
{
printf("the maximum is %d",b);
}
else
{
printf("the maximum is %d",c);
}
}