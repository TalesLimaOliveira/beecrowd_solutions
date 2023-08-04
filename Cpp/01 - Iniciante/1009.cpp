#include <stdio.h>
 
int main() {
    char nome[50];
    double sal, mont, total;

    scanf("%s", nome);
    scanf("%lf", &sal);
    scanf("%lf", &mont);
    total = sal + (mont * 0.15);

    printf("TOTAL = R$ %.2f\n", total);
    return 0;
}