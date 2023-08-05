#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= 10; i++)
        std::cout << i << " x " << n << " = " << n*i << std::endl;
    
    return 0;
}
