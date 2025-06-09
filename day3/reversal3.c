//Purpose: reverses given 3-digit number

#include <stdio.h>


int main(void){
    int input, output, one, ten, hundred;

    printf("Enter a three-digit number: ");
    scanf("%d", &input);
    
    output = (input / 100) + ((input % 10) * 100) + ((input / 10) % 10) * 10;

    printf("The reversal is: %d", output);

    return 0;
}