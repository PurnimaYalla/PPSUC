#include <stdio.h>

int main() {
    int base, height;
    scanf("%d %d", &base, &height);

    int area = (base * height) / 2;  // integer division is fine here
    printf("%d", area);

    return 0;
}

