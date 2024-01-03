#include <iostream>

int main(void)
{
    int x;
    while ((std::cin >> x) && x != 0){   
        if (x % 2 != 0) x++;
        int soma = 0;
        for (int i = 0; i < 5; i++, x += 2)
            soma += x;
        std::cout << soma << std::endl;   
    }
    return 0;
}
