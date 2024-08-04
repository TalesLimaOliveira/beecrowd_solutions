#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    double raiz = b * b - 4 * a * c;

    if (a == 0 || raiz < 0)
        std::cout << "Impossivel calcular\n";

    else {
        raiz = std::sqrt(raiz);
        double x1 = (-b + raiz) / (2 * a);
        double x2 = (-b - raiz) / (2 * a);

        std::cout << std::fixed << std::setprecision(5);
        std::cout << "R1 = " << x1 << std::endl;
        std::cout << "R2 = " << x2 << std::endl;
    }

    return 0;
}
