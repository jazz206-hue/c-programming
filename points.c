#include<stdio.h>
void main()
{
char a;
printf("enter any datatype");
scanf("%c",&a);
if(a=='a'|a=='e'|a=='i'|a=='o'|a=='u')
{
printf("points scored are 5");
}
else if(a>='0'&&a<='9')
{
printf("points scored are 10");
}
else
{
printf("points scored are 0");
}
}