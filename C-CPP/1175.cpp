#include <iostream>
#define TAM 20

int main(void)
{
    int vet[TAM];

    for (int i = 0; i < TAM; i++)
        std::cin >> vet[i];

    for (int i = 0; i < TAM/2; i++){
        int aux = vet[i];
        vet[i] = vet[TAM - 1 - i];
        vet[TAM - 1 - i] = aux;
    }        

    for (int i = 0; i < TAM; i++)
        std::cout << "N[" << i << "] = " << vet[i] << std::endl;
    return 0;
}
