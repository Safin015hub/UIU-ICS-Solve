#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter length of sides of a triangle:\n");
    scanf("%d%d%d",&a,&b,&c);

    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("Valid Triangle");
    }

    else
    {
        printf("Invalid Triangle");
    }

    return 0;
}
