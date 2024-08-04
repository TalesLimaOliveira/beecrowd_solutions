#include <iostream>

int main(void)
{
    for (int i = 1; i <= 10000; i++){
        int n;
        std::cin >> n;
        if (i % n == 2)
            std::cout << i << std::endl;
    }

    return 0;
}
