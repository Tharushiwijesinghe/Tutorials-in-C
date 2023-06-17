#include <stdio.h>

void main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    printf("x= %d, y= %d,z= %d",x,y,z);
      if(x>y)
    {
         if(x>z){
            printf("max=x");
        } else
         printf(" max=z");

    } else if(y>z)
    {
        printf("max=y");
    }
    else printf("max=z");

}
