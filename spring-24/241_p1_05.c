#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int lastDigit= num%10;

    switch(lastDigit){
    case 0:
    printf("0123456789");
    break;
case 1:
    printf("123456789");
    break;
case 2:
    printf("23456789");
    break;
case 3:
    printf("3456789");
    break;
case 4:
    printf("456789");
    break;
case 5:
    printf("56789");
    break;
case 6:
    printf("6789");
    break;
case 7:
    printf("789");
    break;
case 8:
    printf("89");
    break;
case 9:
    printf("9");
    break;
    }
    return 0;
}
