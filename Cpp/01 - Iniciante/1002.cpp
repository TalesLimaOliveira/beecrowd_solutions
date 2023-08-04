#include <stdio.h>

int main() {
    double area, raio, my_pi = 3.14159;
    scanf("%lf", &raio);
    area = my_pi * (raio * raio);
    printf("%.4lf\n", area);
    return 0;
}