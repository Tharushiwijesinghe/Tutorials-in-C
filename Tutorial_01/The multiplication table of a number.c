#include <stdio.h>

void main()
{
    int x,i;
    printf("Enter number:");
    scanf("%d",&x);


    for(i=1;i<=100;i++){
        printf("%d * %d = %d\n",x,i,x*i);
    }

}
