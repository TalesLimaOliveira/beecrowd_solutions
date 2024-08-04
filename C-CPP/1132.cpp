#include <iostream>

void soma(int min, int max)
{
    int soma = 0;
    for (int i = min; i <= max; i++)
        if (i % 13 != 0)
            soma += i;

    std::cout << soma << std::endl;
}

int main(void)
{
    int x, y;
    std::cin >> x >> y;

    if (x < y) soma(x, y);
    else soma(y, x);

    return 0;
}
