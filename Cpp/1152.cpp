#include <iostream>

int main(void)
{
    int n, fat = 1;
    std::cin >> n;

    for (int i = n; i > 1; i--)
        fat *= i;
    
    std::cout << fat << std::endl;
    return 0;
}
