#include <iostream>

int main(void)
{
    unsigned int n;
    std::cin >> n;

    for (unsigned int i = 2; i <= n; i++)
        if (i % 2 == 0){
            unsigned int sqr = i*i;
            std::cout << i << "^2 = " << sqr << std::endl;
        }
          
    return 0;
}
