#include <iostream>
#include <iomanip>

int main(void)
{
    int x, qtd = 0;
    float media = 0.00;
    while(1) {
        std::cin >> x;
        if (x < 0) break;
        media += x;
        qtd++;
    }

    std::cout << std::fixed << std::setprecision(2) << media/qtd <<std::endl;
    return 0;
}
