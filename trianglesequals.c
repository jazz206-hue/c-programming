#include<stdio.h>
void main()
{
int a,b,c;
printf("the lenghts of sides of triangle ");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&a==c)
{
printf("the triangle is equliateral");
}
else if(a==b&&a!=c)
{
printf("the triangle is isosceles");
}
else
{
printf("the triangle is scalen");
}

}
