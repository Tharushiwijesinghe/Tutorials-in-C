#include <stdio.h>

void main()
{
   char text[1000];
   int i;

   printf("Enter your name: \n");
   gets(text);

   for(i=strlen(text)-1;i>=0;--i)
   {
        printf("%c",text[i]);  
   }
}
