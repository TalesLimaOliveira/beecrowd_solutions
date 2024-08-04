#include <iostream>

int main(void)
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    bool valores_aceitos = (b > c) && (d > a) && (c + d > a + b) && (c >= 0) && (d >= 0) && (a % 2 == 0);

    if (valores_aceitos)
        std::cout << "Valores aceitos\n";
    else
        std::cout << "Valores nao aceitos\n";

    return 0;
}
