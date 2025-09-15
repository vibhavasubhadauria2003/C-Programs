// 7. Declare a structure fraction that has two fields—numerator and denominator. Create two
// variables and compare them using function. Return 0 if the two fractions are equal, –1
// if the first fraction is less than the second and 1 otherwise. You may convert a fraction
// into a floating point number for your convenience.

#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

int compareFractions(struct fraction f1, struct fraction f2) {
    float frac1 = f1.numerator*1.0 / f1.denominator;
    float frac2 = f2.numerator*1.0 / f2.denominator;

    if (frac1 == frac2)
        return 0;   
    else if (frac1 < frac2)
        return -1;
    else
        return 1;  
}

void main() {
    struct fraction f1, f2;
    int result;

    printf("Enter first fraction (numerator denominator): ");
    scanf("%d %d", &f1.numerator, &f1.denominator);

    printf("Enter second fraction (numerator denominator): ");
    scanf("%d %d", &f2.numerator, &f2.denominator);

    result = compareFractions(f1, f2);

    if (result == 0)
        printf("Fractions are equal.\n");
    else if (result == -1)
        printf("First fraction is smaller.\n");
    else
        printf("First fraction is greater.\n");

}
