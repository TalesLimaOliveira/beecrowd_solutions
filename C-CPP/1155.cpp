#include <iostream>
#include <iomanip>

int main(void)
{
    double S = 0;
    for (int i = 1; i <= 100; i++)
        S += 1.0 / i;

    std::cout << std::fixed << std::setprecision(2) << S << std::endl;
    return 0;
}
