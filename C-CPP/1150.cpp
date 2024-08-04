#include <iostream>

int main(void){
    int x, z, i, soma;
    std::cin >> x;

    do{
        std::cin >> z;
    } while (z <= x);

    for (i = 1, soma = 0;; i++, x++){
        soma += x;
        if (soma > z) break;       
    }

    std::cout << i << std::endl;
    return 0;
}
