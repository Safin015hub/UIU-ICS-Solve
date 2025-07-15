#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    char opt;
    printf("Enter student id ,then operator : ");
    scanf("%d %c",&id,&opt);
    int last_digit= id%10;
    int result;
    switch(opt)
    {
    case '+':
        result =last_digit+last_digit+last_digit;
        printf("%d+%d+%d=%d",last_digit,last_digit,last_digit,result);
        break;
    case '-':
        result =last_digit-last_digit-last_digit;
        printf("%d-%d-%d=%d",last_digit,last_digit,last_digit,result);
        break;
    case '*':
        result =last_digit*last_digit*last_digit;
        printf("%d*%d*%d=%d",last_digit,last_digit,last_digit,result);
        break;

    default:
        printf("The input is invalid");
        break;
    }
    return 0;
}
