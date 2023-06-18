#include <stdio.h>
void main()
{
    int x;

    printf("x= ");
    scanf("%d",&x);


    if(x%4==0)
    {
        if(x%100==0)
        {
            if(x%400==0)
            {
                 printf("The year is a leap year");
            }
            else
            {
                  printf("the year is not a leap year");
            }
        }
        else
              {
                  printf("the year is not a leap year");
              }

    }
    else
              {
                  printf("the year is not a leap year");
              }
}
