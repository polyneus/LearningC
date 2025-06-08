//Purpose: Displays product information entered by user

#include <stdio.h>

int main(void){
    int number, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &number);
    
    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%-6.2f\t%d/%d/%d", number, price, month, day, year );

    return 0;
}