#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Vending Machine Menu :\nA. Chips - 10\nB. Soda - 15\nC. Chocolate - 20\n");
    char ch;
    printf("Enter Product Code(A/B/C): ");
    scanf("%c",&ch);
    int q;
    printf("Enter Quantity: ");
    scanf("%d",&q);
    float money;
    printf("Enter your money : ");
    scanf("%f",&money);
    int price;
    float discount;
    switch(ch)
    {
    case 'A':
        printf("You Selected Chips\n");
        printf("Quantity : %d\n",q);
        printf("Unit price: 10\n");
        price=q*10;
        printf("Total price: %d\n",price);
        if(q>3)
        {
            printf("Discount : 10%%\n");
            discount=price-(price*.10);
            printf("Discounted Price : %f\n",discount);
            printf("Changed Returned: %f\n",money-discount);
            break;
        }
        printf("Changed Returned: %f\n",money-price);

        break;
    case 'B':
        printf("You Selected Soda\n");
        printf("Quantity : %d\n",q);
        printf("Unit price: 15\n");
        price=q*15;
        printf("Total price: %d\n",price);
        if(q>3)
        {
            printf("Discount : 10%%\n");
            discount=price-(price*.10);
            printf("Discounted Price : %f\n",discount);
            printf("Changed Returned: %f\n",money-discount);
            break;
        }
        printf("Changed Returned: %f\n",money-price);

        break;
    case 'C':
        printf("You Selected Chocolate\n");
        printf("Quantity : %d\n",q);
        printf("Unit price: 20\n");
        price=q*20;
        printf("Total price: %d\n",price);
        if(q>3)
        {
            printf("Discount : 10%%\n");
            discount=price-(price*.10);
            printf("Discounted Price : %f\n",discount);
            printf("Changed Returned: %f\n",money-discount);
            break;
        }
        printf("Changed Returned: %f\n",money-price);

        break;
    default:
        printf("Invalid ! please Enter (A/B/C)\n");
        break;
    }
    printf("Thank You!");

    return 0;
}
