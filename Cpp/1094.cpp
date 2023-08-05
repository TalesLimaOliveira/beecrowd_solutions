#include <iostream>
#include <iomanip>

int main(void)
{
    unsigned int n, coelho = 0, rato = 0, sapo = 0, cobaia = 0;
    std::cin >> n;

    for (unsigned int i = 0; i < n; i++){
        int qtd;
        char tipo;
        std::cin >> qtd >> tipo;

        if (tipo == 'C') coelho += qtd;
        else if (tipo == 'S') sapo += qtd;
        else if (tipo == 'R') rato += qtd;        

        cobaia += qtd;
    }

    std::cout << "Total: " << cobaia << " cobaias"<< std::endl;
    std::cout << "Total de coelhos: " << coelho << std::endl;
    std::cout << "Total de ratos: " << rato << std::endl;
    std::cout << "Total de sapos: " << sapo << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Percentual de coelhos: " << (coelho * 100.0) / cobaia << " %" << std::endl;
    std::cout << "Percentual de ratos: " << (rato * 100.0) / cobaia << " %" << std::endl;
    std::cout << "Percentual de sapos: " << (sapo * 100.0) / cobaia << " %" << std::endl;
    
    return 0;
}