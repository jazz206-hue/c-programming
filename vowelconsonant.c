#include<stdio.h>
void main()
{
char a,b,c;
printf("enter the alphabet");
scanf("%c",&a);
if(a=='a'|a=='e'|a=='i'|a=='o'|a=='u')
{
printf("the %c is vowel",a);
}
else
{
printf("the %c is consonant",a);
}
}