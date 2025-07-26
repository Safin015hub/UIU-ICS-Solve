#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char opt;
    printf("Enter Num1 opt Num2: ");
    scanf("%d%c%d",&a,&opt,&b);
    float result;

    switch(opt)
    {
    case '+':
        result=a+b;
        printf("Result=%f",result);
        break;
    case '-':
        result=a-b;
        printf("Result=%f",result);
        break;
    case '*':
        result=a*b;
        printf("Result=%f",result);
        break;
    case '/':
         if(b==0)
        {
            printf("Zero as divisible is equal 'Undefined'");
        }
        else{
            result=(float)a/b;
            printf("Result=%f",result);
        }
        break;

    case '%':
        result=a % b;
        printf("Result=%f",(int)result);
        break;

    default:
        printf("Invalid !");
        break;
    }
    return 0;
}
