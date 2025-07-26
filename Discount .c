#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n 'No discount (below 50)' \n '5 %% discount (50-100)' \n '10 %% discount(101-200)' \n '15 %% discount(201-500)' \n '20 %% discount(above 500)' \n");
    float amount,result;
    printf("Enter amount: ");
    scanf("%f",&amount);

    if(amount<=49){
        printf("No discount!\n");
        printf("Final amount after discount: %.2f\n",amount);
    }
    else if(amount>=50 && amount<=100){
         printf("5%% discount\n");
        result= amount - (amount*0.05);
        printf("Final amount after discount: %.2f",result);
    }
     else if(amount>=101 && amount<=200){
         printf("10%% discount\n");
        result= amount - (amount*0.10);
        printf("Final amount after discount: %.2f",result);
    }
     else if(amount>=201 && amount<=500){
         printf("15%% discount\n");
        result= amount - (amount*0.15);
        printf("Final amount after discount: %.2f",result);
    }
     else if(amount>500){
         printf("20%% discount\n");
        result= amount - (amount*0.20);
        printf("Final amount after discount: %.2f",result);
    }
    return 0;
}
