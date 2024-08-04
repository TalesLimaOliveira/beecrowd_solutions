#include <iostream>
#include <iomanip>

int main()
{
    double vet[100];
    for (int i = 0; i < 100; i++){
        std::cin >> vet[i];
        if (vet[i] <= 10)
            std::cout << std::fixed << std::setprecision(1) << "A[" << i << "] = " << vet[i] << std::endl;   
    }   

    return 0;
}