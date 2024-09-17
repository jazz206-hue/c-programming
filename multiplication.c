#include<stdio.h>
void main()
{
int i,a;
printf("enter the number to know its multiplication table");
scanf("%d",&a);
for(i=0;i<=11;i++)
{
printf("%dx%d=%d \n",a,i,a*i);
}
}