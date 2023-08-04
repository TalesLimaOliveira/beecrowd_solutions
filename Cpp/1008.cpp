#include <stdio.h>
 
int main() {
    int num, hr;
    double sal;

    scanf("%d", &num);
    scanf("%d", &hr);
    scanf("%lf", &sal);
    sal *= hr;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, sal);
    return 0;
}