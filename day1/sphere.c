//Purpose: Calculates the volume of a sphere

#include <stdio.h>
#define PI 3.141592f

int main(void){
    float radius, volume;

    printf("Enter the radius of the sphere:");
    scanf("%f", &radius);

    volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    printf("Volume of the sphere with radius %.2f is: %.1f", radius, volume);

    return 0;
}