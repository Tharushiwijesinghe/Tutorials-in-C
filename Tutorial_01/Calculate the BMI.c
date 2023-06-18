#include <stdio.h>
void main()
{
    float w,h,BMI;
    printf("Enter your weight: ");
    scanf("%f",&w);

    printf("Enter your height: ");
    scanf("%f",&h);

   BMI=w/(h*h);

    if(BMI<18.5)
    {
        printf("underweight");
    }
    else if(BMI<25.0)
    {
        printf("Normal");
    }
    else if(BMI<30.0)
    {
        printf("Overweight");
    }
    else printf("obese");

}
