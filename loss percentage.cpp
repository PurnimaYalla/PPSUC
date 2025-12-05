#include <stdio.h>
int main() {
double CP, SP;
scanf("%lf %lf", &CP, &SP);
double loss_percent = ((CP - SP) / CP) * 100.0;
printf("%.2f", loss_percent);
return 0;
}

