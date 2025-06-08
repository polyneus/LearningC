//Purpose: turns (xxx) xxx-xxxx phone format into xxx.xxx.xxxx format

#include <stdio.h>

int main(void){
    int first, second, third;

    printf("Enter phone number: [ (xxx) xxx-xxxx ]: ");
    scanf("(%d) %d-%d", &first, &second, &third);

    printf("You entered: %d.%d.%d", first, second, third);

    return 0;
}