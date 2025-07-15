#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float energy,mass;
    printf("Enter the value of Energy: ");
    scanf("%f",&energy);
    printf("Enter the value of Mass: ");
    scanf("%f",&mass);

    //E= MC^2
    float c_square=energy/mass;
    float c_sqrt = sqrt(c_square);

    printf("The speed of light is %.3f",c_sqrt);

    return 0;
}
