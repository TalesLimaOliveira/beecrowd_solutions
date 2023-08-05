#include <iostream>

int main(void)
{
    while (1){
        int senha;
        std::cin >> senha;
        if (senha == 2002){
            std::cout << "Acesso Permitido\n";
            break;
        }

        std::cout << "Senha Invalida\n";    
    }
    return 0;
}
