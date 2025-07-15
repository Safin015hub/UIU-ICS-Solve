#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    float l,w;

    scanf("%c %f %f",&choice,&l,&w);

    if(choice=='A')
    {
        float area=l*w;
        printf("The area of a rectangle is: %.6f",area);
    }
    else if(choice=='P')
    {
        float perimeter= 2*(l+w);
        printf("The perimeter of the rectangle is:%.6f ",perimeter);
    }
    else
    {
        printf("Please Enter 'A' if you want the result of Area or 'P' if you want the result of Perimeter.");
    }
    return 0;
}
