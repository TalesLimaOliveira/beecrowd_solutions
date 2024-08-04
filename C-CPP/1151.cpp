#include <iostream>

int main(void){
    int n;
    std::cin >> n;

    for (int i = 0 , fib_1 = 0, fib_2 = 1; i < n; i++){
        std::cout << fib_1;
        if (i != n-1) std::cout << " ";
        int aux = fib_1 + fib_2;
        fib_1 = fib_2;
        fib_2 = aux;
    }

    std::cout << std::endl;    
    return 0;
}
