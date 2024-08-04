#include <iostream>

int main(void)
{
    int vet[10], n;
    for (int i = 0; i < 10; i++){
        std::cin >> n;
        if (n <= 0) vet[i] = 1;
        else vet[i] = n;
    }

    for (int i = 0; i < 10; i++)
        std::cout << "X[" << i << "] = " << vet[i] << std::endl;

    return 0;
}