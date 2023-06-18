#include <stdio.h>
 void main()
 {
     int x,y;
     char opr;

     printf("Enter the values and operator:");
     scanf(" %d %c %d",&x,&opr,&y);
     if(opr=='+'){
        printf("sum: %d",x+y);
     }
     else if(opr=='-'){
        printf("difference: %d",x-y);
     }
     else if(opr=='*'){
        printf("multiplication: %d",x*y);
     }
     else if(opr=='/'){
        printf("division: %d",x/y);
     }
 }
