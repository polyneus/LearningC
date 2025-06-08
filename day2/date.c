//Purpose: changes mm/dd/yyyy format into yyyy/mm/dd format

#include <stdio.h>

int main(void){
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered date %d%d%d", year, month, day);

    return 0;
}