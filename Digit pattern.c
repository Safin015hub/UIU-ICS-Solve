#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,lastdigit;
    printf("Enter a Number: ");
    scanf("%d",&number);

    lastdigit=number%10;

    switch(lastdigit)
    {
    case 0:
        printf("Output: 0123456789");
        break;
    case 1:
        printf("Output: 123456789");
        break;
    case 2:
        printf("Output: 23456789");
        break;
    case 3:
        printf("Output: 3456789");
        break;
    case 4:
        printf("Output: 456789");
        break;
    case 5:
        printf("Output: 56789");
        break;
    case 6:
        printf("Output: 6789");
        break;
    case 7:
        printf("Output: 789");
        break;
    case 8:
        printf("Output: 89");
        break;
    case 9:
        printf("Output: 9");
        break;
    default:
        printf("Invalid!");
        break;
    }
    return 0;
}
