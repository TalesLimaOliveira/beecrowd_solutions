#include <iostream>

int duracao(int a, int b) {
    if (a == b) return 24;
    if (a < b) return b - a;
    return 24 - a + b;
}

int main()
{
    int a, b;

    std::cin >> a >> b;
    std::cout << "O JOGO DUROU " << duracao(a, b) << " HORA(S)\n";

    return 0;
}
