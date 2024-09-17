#include<stdio.h>
void main()
{
int a;
printf("enter the percentage of the student");
scanf("%d",&a);
if(a>=90)
{
printf("A grade");
}
else if(a<90&&a>=80)
{
printf("B grade");
}
else if(a<80&&a>=70)
{
printf("C grade");
}
else if(a<70&&a>=60)
{
printf("D grade");
}
else if(a<60&&a>=40)
{
printf("E grade");
}
else
{
printf("F grade");
}
}