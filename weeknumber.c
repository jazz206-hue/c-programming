#include <stdio.h>

void main() 
{
    int a;
    printf("Enter any character: ");
    scanf("%d", &a);

    
    if (a ==1) 
{
        printf("'%d is monday\n", a);
    }
   
    else if (a ==2) 
{
        printf("'%d is tuesday\n", a);
    }
 else if (a ==3) 
{
        printf("'%d is wednesday\n", a);
    }
 else if (a ==4) 
{
        printf("'%d is thursday\n", a);
    }
else if (a ==5) 
{
        printf("'%d is friday\n", a);
    }
else if (a ==6) 
{
        printf("'%d is saturday\n", a);
    }
else if (a ==7) 
{
        printf("'%d is sunday\n", a);
    }
else
{
 printf("'wrong number");
}


}