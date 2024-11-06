#include <stdio.h>
#include <math.h>
int main() {
int a, b, c, d, r1, r2;
printf("Enter coefficients  a, b and c: ");
scanf("%d %d %d", &a, &b,     &c);
d = b * b - 4 * a * c;
if (d >= 0) {   
        r1 = (-b + (int)sqrt(d)) / (2 * a);
        r2 = (-b - (int)sqrt(d)) / (2 * a);
printf("Roots: %d and %d\n", r1, r2);
} else {
        printf("The equation has complex roots.\n");
    }
    return 0;
}