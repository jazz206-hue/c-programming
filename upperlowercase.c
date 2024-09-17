#include<stdio.h>
void main()
{
char a;
printf("enter the letter");
scanf("%c",&a);
if(a>='A'&&a<='Z')
{
printf("the letter you have entered is upper case");
}
else
{
printf("the letter you have entere is lower case");
}
}