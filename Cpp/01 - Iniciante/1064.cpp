#include <iostream>
#include <iomanip>

int main()
{
    double vet[6], media = 0.0;
    int n = 0;

    for (int i = 0; i < 6; i++){
        std::cin >> vet[i];
        if (vet[i] >= 0.0){n++; media += vet[i];}
    }
    
    std::cout << n << " valores positivos\n";
    std::cout << std::fixed << std::setprecision(1) << media / n << std::endl;
    return 0;
}