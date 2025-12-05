#include <stdio.h>
int main() {
double inches;
scanf("%lf", &inches);
double cm = inches * 2.54;
printf("%.2f", cm);
return 0;
}

