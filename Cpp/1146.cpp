#include <iostream>

int main(void)
{
    int x;
    while ((std::cin >> x) && x != 0){
        for (int i = 1; i <= x; i++){
            if (i == x) std::cout << i << std::endl;
            else std::cout << i << ' ';
        }
    } 
}
