#include <stdio.h>
int main() {
double CP, SP;
scanf("%lf %lf", &CP, &SP);
double profit_percent = ((SP - CP) / CP) * 100.0;
printf("%.2f", profit_percent);
return 0;
}

