#include <iostream>

int main(void)
{
    int x = 7;
    for (int i = 1; i < 10; i += 2){
        for (int j = x; j > (x-3); j--)
            std::cout << "I=" << i << " J=" << j << std::endl;
        x += 2;
    }

    return 0;
}