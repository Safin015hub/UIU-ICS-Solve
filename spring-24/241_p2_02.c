#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,result;
    printf("Enter the value of x and y : \n");
    scanf("%f%f",&x,&y);

    if (x<0 && y<0){
        result= pow(x,3)+5*x*y;
        printf("Output: %.3f",result);
    }
    else if(x<0 && y>0){
            result=4*y;
        printf("output:%.3f",result);

    }
    else if(x>=0){
        result=1.0/(x+y);
        printf("output:%.3f",result);
    }
    else{
        printf("Undefined");
    }
    return 0;
}
