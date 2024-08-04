#include <iostream>

int main(void)
{
    int a, b, op = 1;
    int inter = 0, gremio = 0, empate = 0;

    while (op == 1)
    {
        int a = 0, b = 0;
        std::cin >> a >> b;

        if (a > b) inter++;
        if (a < b) gremio++;
        if (a == b) empate++;
        
        std::cout << "Novo grenal (1-sim 2-nao)" << std::endl;
        std::cin >> op;  
    }

    std::cout << inter + gremio + empate << " grenais" << std::endl;
    std::cout << "Inter:" << inter << std::endl;
    std::cout << "Gremio:" << gremio << std::endl;
    std::cout << "Empates:" << empate << std::endl;

    if (inter > gremio) std::cout << "Inter venceu mais" << std::endl;
    else if (inter < gremio) std::cout << "Gremio venceu mais" << std::endl;
    else if (inter == gremio)std::cout << "Nao houve vencedor" << std::endl;
    
    return 0;
    
}
