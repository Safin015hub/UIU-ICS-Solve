#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter Three Integers: \n");
    scanf("%d %d %d",&a,&b,&c);

    int x=a+b*c;
    int y=b+a*c;
    int z=c+b*c;

    //find the maximum

    if(x>y && x>z){
        printf("Maximum value : %d",x);
    }
    else if(y>x && y>z){
        printf("Maximum value : %d",y);
    }
    else{
        printf("Maximum value : %d",z);
    }

    return 0;
}
