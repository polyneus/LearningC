// Purpose: Calculates the Dimensional weight of the box with dimesions 8x12x10.

#include <stdio.h>
#define CM_PER_KG 166

int main(void){
    int height, length, width, volume, weight;

    printf("Enter the height of the box:");
    scanf("%d",&height);
    printf("Enter the length of the box:");
    scanf("%d",&length);
    printf("Enter the width of the box:");
    scanf("%d",&width);

    volume = height * length * width;
    weight = (volume + CM_PER_KG - 1) / CM_PER_KG;

    printf("Dimensions of the box: %d x %d x %d\n",height, length, width);
    printf("Volume: %d\n", volume);
    printf("Dimensional weigth: %d\n", weight);
    
    return 0;
}