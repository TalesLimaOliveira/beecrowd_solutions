#include <iostream>

int main(void)
{
    int op;
    int a = 0, g = 0, d = 0;

    do{
        std::cin >> op;
        switch (op){
            case 1: a++; break;
            case 2: g++; break;
            case 3: d++; break;
            case 4: break;
            default: break;
        }
    } while (op != 4);

    std::cout << "MUITO OBRIGADO" << std::endl;
    std::cout << "Alcool: " << a << std::endl;
    std::cout << "Gasolina: " << g << std::endl;
    std::cout << "Diesel: " << d << std::endl;
    
    return 0;
}
