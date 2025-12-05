#include <stdio.h>

int main() {
int base1, base2, height;
double area;
// Read input values
scanf("%d", &base1);
scanf("%d", &base2);
scanf("%d", &height);

// Calculate area of trapezium
area = 0.5 * (base1 + base2) * height;

// Print area up to 4 decimal places
printf("%.4lf\n", area);

return 0;
}

