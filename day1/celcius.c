//Purpose: Converts Fahrenheit to Celcius

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
    float fahrenheit, celcius;

    printf("Enter Fahrenheit degree:");
    scanf("%f", &fahrenheit);

    celcius = SCALE_FACTOR * (fahrenheit - FREEZING_PT);

    printf("Celcius equivalent: %.1f", celcius);
  
    return 0;
}