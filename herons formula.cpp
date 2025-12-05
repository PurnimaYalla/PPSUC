#include <stdio.h>
#include <math.h>

int main() {
double a, b, c;
scanf("%lf %lf %lf", &a, &b, &c);

```
double s = (a + b + c) / 2.0;
double area;

// Check for valid triangle (Heron's formula becomes invalid for impossible triangles)
if (a + b <= c || a + c <= b || b + c <= a) {
    area = 0.0;
} else {
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

printf("%.4f", area);
return 0;
```

}

