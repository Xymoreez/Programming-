
/*
Name;Simon Rukungu Njiiri 
Reg:CT101/G/26500/25
Description; exam eligiblity program
*/

#include <stdio.h>

int main() {
    float attendance, marks;

    // Input values
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &marks);

    // Check eligibility
    if (attendance >= 75 && marks >= 40) {
        printf("Eligible for final exam.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}

