#include <stdio.h>
 
int main() {
    int km;
    double gas, consumo;
    scanf("%d", &km);
    scanf("%lf", &gas);
    consumo = km / gas;
    printf("%.3f km/l\n", consumo);
}