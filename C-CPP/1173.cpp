#include <iostream>

int main(void)
{
    int vet[10], x;
    std::cin >> x;
    for (int i = 0; i < 10; i++, x *= 2){
        vet[i] = x;
    }

    for (int i = 0; i < 10; i++)
        std::cout << "N[" << i << "] = " << vet[i] << std::endl;

    return 0;
}