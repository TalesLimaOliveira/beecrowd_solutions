#include <iostream>

void soma_impar()
{
    int start, qtd, soma = 0;
    std::cin >> start >> qtd;

    for (int i = 0; i < qtd*2; i++, start++)
        if (start % 2 != 0) soma += start;
    std::cout << soma << std::endl;
}

int main(void)
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
        soma_impar();
    
    return 0;
}
