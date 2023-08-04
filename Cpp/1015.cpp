#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double distancia, x1, y1, x2, y2;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%.4lf\n", distancia);

    return 0;
}
