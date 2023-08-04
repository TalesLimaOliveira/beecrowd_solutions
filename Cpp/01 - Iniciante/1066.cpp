#include <iostream>

int main(){
    int x, par = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < 5; i++){
        std::cin >> x;
        if (x % 2 == 0) par++;
        if (x % 2 == 1) odd++;
        if (x > 0) pos++;
        if (x < 0) neg++;
    }  
 
    std::cout << par << " valor(es) par(es)\n";
    std::cout << odd << " valor(es) impar(es)\n";
    std::cout << pos << " valor(es) positivo(s)\n";
    std::cout << neg << " valor(es) negativo(s)\n";
    return 0;
}
