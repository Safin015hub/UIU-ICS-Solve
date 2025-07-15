#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int max;   //Find the maximum
    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    //check divisibilty
    if(max%2==0){
        printf("Red Number");
    }
    else if(max%3==0){
        printf("Blue Number");
    }
    else if(max%2==0 && max%3==0){
        printf("Purple Number");
    }
    else{
        printf("White Number");
    }

    return 0;
}
