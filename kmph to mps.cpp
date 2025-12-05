#include <stdio.h>
int main() {
double speed;
scanf("%lf", &speed);
double mps = speed * (5.0 / 18.0);
printf("%.2f", mps);
return 0;
}

