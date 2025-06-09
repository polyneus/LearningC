//Purpose: reverses given 2-digit number

#include <stdio.h>


int main(void){
    int input, output;

    printf("Enter a two-digit number: ");
    scanf("%d", &input);

    output = (input / 10) + (input % 10) * 10;
    
    printf("The reversal is: %d", output);

    return 0;
}