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
    printf("Incorrect pin. Try again.\n");
}

int choice;

printf("Enter your choice: ");
scanf("%d",&choice);
int withdraw,remaining,deposit;

 switch(choice){
 case 1:
     int balance = 1000;
     printf("Your current balance is : %d tk\n", balance);
    break;
 case 2:

    printf("Enter amount to withdraw (max 500 tk): ");
    scanf("%d", &withdraw);

    if (withdraw > 500) {
        printf("Withdrawal limit exceeded! Max allowed is 500 tk.\n");
    } else {
        printf("Withdrawal successful!\nFee charged: 5 tk\n");
        remaining = 1000 - withdraw - 5;  // Include 5 tk fee deduction
        printf("Remaining balance: %d\n", remaining);
    }
    break;
 case 3:
    printf("Enter deposit amount:");
    scanf("%d",&deposit);
    printf("Deposit successful!\n New Balance : %d",1000+deposit);
    break;
 case 4:
    printf("Exit successful\n");
    break;
 }

    return 0;
}
