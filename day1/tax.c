//Purpose: calculates 5% tax

#include <stdio.h>

int main(void){
    float amount, taxxedAmount;

    printf("Enter an amount:");
    scanf("%f", &amount);

    taxxedAmount = amount + (amount/100) * 5;

    printf("With tax added: $%.2f", taxxedAmount);
    
    return 0;
}