#include <iostream>
#define TAM 3

void print_vet(int vet[])
{
    for (int i = 0; i < TAM; i++)
        std::cout << vet[i] << std::endl;
}

void my_sort(int vet[])
{
    for (int i = 0; i < TAM - 1; i++)
        for (int j = 0; j < TAM - i - 1; j++)
            if (vet[j] > vet[j + 1]) {
                int aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
}

int main(void)
{
    int vet1[TAM], vet2[TAM];

    for (int i = 0; i < TAM; i++)
        std::cin >> vet1[i];

    for (int i = 0; i < TAM; i++)
        vet2[i] = vet1[i];

    my_sort(vet1);
    print_vet(vet1);
    std::cout << std::endl;
    print_vet(vet2);

    return 0;
}
