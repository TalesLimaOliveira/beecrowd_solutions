#include <iostream>
#include <iomanip>

int main(void)
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        float a, b, c;
        std::cin >> a >> b >> c;
        std::cout << std::fixed << std::setprecision(1) << ((a * 2) + (b * 3) + (c * 5)) / 10.0 << std::endl;
    }

    return 0;
}