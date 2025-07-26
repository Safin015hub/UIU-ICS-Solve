#include <stdio.h>
#include <stdlib.h>

int main()
{
int pin;
printf("Enter pin:");
scanf("%d",&pin);

if (pin==1234){
    printf("pin accepted.welcome!\n");
    printf("Menu:\n1. Check balance\n2. Withdraw money\n3. Deposit Money\n4. Exit\n");
}
else{
    printf("Incorrect pin. Try again.");
}

int choice;

printf("Enter your choice: ");
scanf("%d",&choice);
int withdraw,remaining,deposit;

 switch(choice){
 case 1:
    printf("Your current balance is :1000 tk\n");
    break;
 case 2:

    printf("Enter amount to withdraw(max 500 tk): ");
    scanf("%d",&withdraw);
    printf("Withdrawal successful!\nFee charged: 5 tk");
    remaining=1000-withdraw;

    printf("Remaining balance : %d",remaining);
     if (withdraw==1000){
        printf("%d",1000-5);
    }
    break;
 case 3:
    printf("Enter deposit amount:");
    scanf("%d",&deposit);
    printf("Deposit successful!\n New Balance : %d",1000+deposit);
    break;
 case 4:
    printf("Exit successful");
    break;
 }

    return 0;
}
