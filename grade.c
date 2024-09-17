#include<stdio.h>
void main()
{
int a;
printf("enter the average grade of the class");
scanf("%d",&a);
if(a>80)
{
printf("A grade");
}
else if(a<=80&a>60)
{
printf("B grade");
}
else if(a<=60&a>40)
{
printf("C grade");
}
else if(a<=40)
{
printf("F grade");
}
}
