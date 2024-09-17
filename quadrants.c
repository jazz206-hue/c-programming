#include<stdio.h>
void main()
{
int a,b;
printf("enter the x and y coordinate");
scanf("%d%d",&a,&b);
if(a>0&&b>0)
{
printf("the point (%d,%d) lie in 1st quadrant",a,b);
}
else if(a<0&&b>0)
{
printf("the point (%d,%d) lie in 2nd quadrant",a,b);
}
else if(a<0&&b<0)
{
printf("the point (%d,%d) lie in 3rd quadrant",a,b);
}
else if(a>0&&b<0)
{
printf("the point (%d,%d) lie in 4th quadrant",a,b);
}
else if(a!=0&&b==0)
{
printf("the point (%d,%d) lie on x axis",a,b);
}
else if(a==0&&b!=0)
{
printf("the point (%d,%d) lie on y axis",a,b);
}
}
