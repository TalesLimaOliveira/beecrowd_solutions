#include <iostream>

int main(void)
{
    int i = 1, j = 60;
    while (j >= 0){
        std::cout << "I=" << i << " J=" << j << std::endl;
        i += 3;
        j -= 5;
    }
    return 0;
}
