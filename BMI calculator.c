#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,w,bmi;
    printf("Enter Height(m) : ");
    scanf("%f",&h);
    printf("Enter Weight(kg) : ");
    scanf("%f",&w);

    bmi=w/(h*h);
    printf("Your BMI is %.2f\n",bmi);
    if(bmi<18.5)
    {

        printf("Underweight");
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        printf("Normal");
    }
    else if(bmi>=25 && bmi<=29.99)
    {

        printf("Overweight");
    }
    else
    {

        printf("Obese");
    }
    return 0;
}
