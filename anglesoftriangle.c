#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the angles of the triangle");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
{
printf("the angles are valid");
}
else
{
printf("the angles are invalid");
}
}