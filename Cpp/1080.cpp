#include <iostream>

int main(void)
{   
    int vet[100];
    int maior = 0, indice = 0;

    for (int i = 0; i < 100; i++){
        std::cin >> vet[i];
        if (vet[i] > maior) {
            maior = vet[i];
            indice = i;
        }
    }

    std::cout << maior << std::endl;
    std::cout << indice+1 << std::endl;
    return 0;
}