#include <iostream>
#include <iomanip>

int main(void)
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        double x, y;
        std::cin >> x >> y;

        if(y == 0) std::cout << "divisao impossivel\n";
        else std::cout << std::fixed << std::setprecision(1) << x / y << "\n";
    }
    return 0;
}
