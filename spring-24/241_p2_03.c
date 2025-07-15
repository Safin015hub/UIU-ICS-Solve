#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    int min=a;
    if(b<a){
        min=b;
    }
    if(c<a){
        min=c;
    }
    if(min==a){
        if(a%2!=0 ){
            printf("Odd,Red Number");
        }
        if(a%2==0){
            printf("Even,Blue Number");
        }
    }
    else if(min==b){
        if(b%2!=0 ){
            printf("Odd,Red Number");
        }
        if(b%2==0){
            printf("Even,Blue Number");
        }
    }
    else if(min==c){
        if(c%2!=0 ){
            printf("Odd,Red Number");
        }
        if(c%2==0){
            printf("Even,Blue Number");
        }
    }

    return 0;
}
