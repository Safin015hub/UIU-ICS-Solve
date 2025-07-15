#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float  r,pi;

    pi=3.1416;
    printf("Enter radius value: ");
    scanf("%f",&r);

    float volume,area;
    volume=(4*pi*(pow(r,3)))/3;
    area=4*pi*pow(r,2);

    printf("Volume = %.2f , Area = %.2f",volume,area);
    return 0;
}
