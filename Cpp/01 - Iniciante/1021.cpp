#include <iostream>

int main()
{
    const int notas[] = {100, 50, 20, 10, 5, 2};
    const int moedas[] = {100, 50, 25, 10, 5, 1};

    double valor;
    std::cin >> valor;

    int centavos = (int)(valor * 100);

    std::cout << "NOTAS:\n";
    for (int nota : notas)
    {
        int qtd_notas = centavos / (nota * 100);
        centavos %= (nota * 100);
        printf("%d nota(s) de R$ %.2f\n", qtd_notas, (double)(nota));
    }

    std::cout << "MOEDAS:\n";
    for (int moeda : moedas)
    {
        int qtd_moedas = centavos / moeda;
        centavos %= moeda;
        printf("%d moeda(s) de R$ %.2f\n", qtd_moedas, (double)(moeda) / 100);
    }

    return 0;
}