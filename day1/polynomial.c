//Purpose: calculates 3x^5 + 2x^4 - 5x^3 - x^2 + 7x + 6

#include <stdio.h>


int main(void){
    int x, value;

    printf("Enter the value of x:");
    scanf("%d", &x);

    value = 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - 2 * (x*x) + 7 * x + 6;

    printf("Value is: %d", value);

    return 0;
}