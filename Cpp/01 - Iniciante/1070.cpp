#include <iostream>

int main(){
    int x;
    std::cin >> x;

    for (int i = x; i < x+12; i++)
        if (i % 2 == 1)
            std::cout << i << std::endl;
    return 0;
}
