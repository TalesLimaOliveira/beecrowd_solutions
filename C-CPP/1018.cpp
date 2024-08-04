#include <iostream>

int main(){
    unsigned int total, qtd_cedula;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    std::cin >> total;

    std::cout << total << std::endl;
    for (int i = 0; i < 7; i++){
        qtd_cedula = total / cedulas[i];
        total = total % cedulas[i];
        std::cout << qtd_cedula << " nota(s) de R$ " << cedulas[i] << ",00\n";
    }

    return 0;
}
