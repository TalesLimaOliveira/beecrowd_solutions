#include <iostream>

int soma_impar(int menor, int maior)
{
    int soma = 0;
    for (int i = menor+1; i <= maior-1; i++)
        if (i % 2 != 0) soma += i;
        
    return soma;
}

int main()
{
    int a, b, soma = 0;
    std::cin >> a >> b;

    if(a < b) soma = soma_impar(a, b);
    if(b < a) soma = soma_impar(b, a);
    std::cout << soma << std::endl;     
}