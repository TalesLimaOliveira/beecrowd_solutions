#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c;
    double tri, cir, tra, qua, ret;

    scanf("%lf %lf %lf", &a, &b, &c);
    
    tri = (a * c) / 2;
    cir = 3.14159 * (c*c);
    tra = (a + b) * (c / 2.0);
    qua = b * b;
    ret = a * b;

    printf("TRIANGULO: %.3f\n", tri);
    printf("CIRCULO: %.3f\n", cir);
    printf("TRAPEZIO: %.3f\n", tra);
    printf("QUADRADO: %.3f\n", qua);
    printf("RETANGULO: %.3f\n", ret);
    return 0;
}