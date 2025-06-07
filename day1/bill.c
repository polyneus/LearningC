//Purpose: calculates smallest number of bills needed to pay the amount

#include <stdio.h>


int main(void){
    int amount, bill20, bill10, bill5, bill1;

    printf("Enter amount:");
    scanf("%d", &amount);

    bill20 = amount / 20;
    amount = amount - (bill20 * 20);
    
    bill10 = amount / 10;
    amount = amount - (bill10 * 10);
    
    bill5 = amount / 5;
    amount = amount - (bill5 * 5);
    
    bill1 = amount / 1;

    printf("$20 bills: %d\n", bill20);
    printf("$10 bills: %d\n", bill10);
    printf("$5 bills: %d\n", bill5);
    printf("$1 bills: %d\n", bill1);
                
    return 0;
}