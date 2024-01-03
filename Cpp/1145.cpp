#include <iostream>

int main(void) {
    int x, y;
    std::cin >> x >> y;

    for (int i = 1; i <= y;)
        for (int j = 1; j <= x; j++, i++){
            if (j == x) std::cout << i << std::endl;
            else std::cout << i << ' ';
        }   
         
    return 0;
}
