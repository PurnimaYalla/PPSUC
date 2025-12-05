#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    printf("%02d", year % 100);  // %02d ensures leading zero if needed

    return 0;
}

