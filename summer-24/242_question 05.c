#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Select your service:\n 1.Car\n 2.Bus\n 3.Bike\n");

    char choice;
    printf("Enter Your choice: ");
    scanf("%c",&choice);
    float distance,t_charge;
    printf("Enter the distance: ");
    scanf("%f",&distance);

    switch(choice)
    {
    case '1':
        printf("You have selected car\n");
        t_charge=500*distance;
        printf("The total charge for your trip is: %.2f\n",t_charge);
        break;
    case '2':
        printf("You have selected Bus\n");
        t_charge=300*distance;
        printf("The total charge for your trip is: %.2f\n",t_charge);
        break;
    case '3':
        printf("You have selected Bike\n");
        t_charge=100*distance;
        printf("The total charge for your trip is: %.2f\n",t_charge);
        break;
    default:
        printf("Invalid Service type selected.\n");
        break;



    }
    return 0;
}
