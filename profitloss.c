#include<stdio.h>
void main()
{
int a,b;
printf("enter the price the item was bought for");
scanf("%d",&a);
printf("enter the price sold ");
scanf("%d",&b);
if(a>b)
{
printf("the loss is %d",a-b);
}
else
{
printf("the profit is %d",b-a);
}
}
