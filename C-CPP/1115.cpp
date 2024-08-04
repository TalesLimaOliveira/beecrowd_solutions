#include <iostream>

int main(void)
{
    int x,y;
    while (1){   
        std::cin >> x >> y;
        if (x == 0 || y == 0) break;
        else if (x > 0 && y > 0) std::cout << "primeiro\n";
        else if (x < 0 && y > 0) std::cout << "segundo\n";
        else if (x < 0 && y < 0) std::cout << "terceiro\n";
        else if (x > 0 && y < 0) std::cout << "quarto\n";
    }
    
    return 0;
}
