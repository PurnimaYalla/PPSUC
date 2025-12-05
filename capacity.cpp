#include <stdio.h>
int main() {
long long T, S, B;
scanf("%lld %lld %lld", &T, &S, &B);
long long bytes = 2LL * T * S * B * 512;
long long kb = bytes / 1024;
printf("%lld KB", kb);
return 0;
}

