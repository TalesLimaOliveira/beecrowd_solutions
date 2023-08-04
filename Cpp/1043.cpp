#include <iostream>
#include <iomanip>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::fixed << std::setprecision(1);

    if (a + b > c && a + c > b && b + c > a)
        std::cout << "Perimetro = " << a + b + c << std::endl;
    else
        std::cout << "Area = " << ((a + b) * c) / 2 << std::endl;

    return 0;
}
