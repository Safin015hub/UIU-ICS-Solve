#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Menu:\n1. Basic (50 TK/GB)\n2. Standard (100 TK/GB)\n3. Premium (150 Tk/GB)\n");
    int type,used;
    printf("Enter Package Type: ");
    scanf("%d",&type);
    printf("Enter Usage of GB: ");
    scanf("%d",&used);
    float cost;

    switch(type)
    {
    case 1:
        printf("You have selected Basic package.");
        cost=50*used;
        printf("Total Cost=%.2f ",cost);
        break;
    case 2:
        printf("You have selected Standard package.");
        cost=100*used;
        printf("Total Cost=%.2f ",cost);
        break;
    case 3:
        printf("You have selected Premium package.");
        cost=150*used;
        printf("Total Cost=%.2f ",cost);
        break;
    default:
        printf("Invalid! Please enter between 1 to 3");
        break;


    }

    return 0;
}
