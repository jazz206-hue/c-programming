#include <stdio.h>

void main() 
{
    int a;
    printf("Enter any character: ");
    scanf("%d", &a);

    
    if (a ==1) 
{
        printf("january no of days 31", a);
    }
   
    else if (a ==2) 
{
        printf("febuary 28", a);
    }
 else if (a ==3) 
{
        printf("march 31", a);
    }
 else if (a ==4) 
{
        printf("april 30", a);
    }
else if (a ==5) 
{
        printf("may 31", a);
    }
else if (a ==6) 
{
        printf("'june 30", a);
    }
else if (a ==7) 
{
        printf("'july 31", a);
    }
else if(a==8)
{
 printf("'august 31");
}
 else if(a==9)
{
 printf("'september 30");
}
else if(a==10)
{
 printf("'october 31");
}
else if(a==11)
{
 printf("'november 30");
}
else if(a==12)
{
 printf("'december 31");
}
else
{
printf("the number entered is wrong");
}
}