#include <iostream>

int calc_cidade()
{
    int PA, PB;
    double G1, G2;
    std::cin >> PA >> PB >> G1 >> G2;

    for (int i = 1;; i++){
        PA += ((PA*G1)/100);
        PB += ((PB*G2)/100);

        if (i > 100) return -1;
        if (PA > PB) return i;
    }
    return 0;        
}

int main(void)
{
    int tc;
    std::cin >> tc;
    for (int i = 0; i < tc; i++){
        int anos = calc_cidade();
        if (anos == -1) std::cout << "Mais de 1 seculo." << std::endl;
        else std::cout << anos << " anos." << std::endl;
    } 
    
    return 0;
}
