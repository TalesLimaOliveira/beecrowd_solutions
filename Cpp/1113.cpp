#include <iostream>

int main(void)
{
    int x, y;
    while ((std::cin >> x >> y ) && x != y){
        if(x < y) std::cout << "Crescente\n";
        else std::cout << "Decrescente\n";
    }
    
    return 0;
}
