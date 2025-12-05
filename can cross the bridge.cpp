#include <stdio.h>
#include <math.h>

int main() {
double X, Y;
scanf("%lf %lf", &X, &Y);
double hyp = sqrt(X*X + Y*Y);

printf("%.2f", hyp);
return 0;
}

