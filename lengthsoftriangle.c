#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the legth of sides of triangle");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c&&b+c>a&&a+c>b)
{
printf("the sides length of triangle satisfy the theorem of triangle inequality");
}
else
{
printf("the sides length of triangle doesnot satisfy the theorem of triangle inequality");
}
}