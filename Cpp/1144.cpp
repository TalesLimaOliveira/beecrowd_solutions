#include <iostream>

int main(void) {
    unsigned int n;
    std::cin >> n;
    for (unsigned int i = 1; i <= n; i++){
        std::cout << i <<" "<< i*i <<" "<< i*i*i << std::endl;
        std::cout << i <<" "<< (i*i)+1 <<" "<< (i*i*i)+1 << std::endl;
    }
        
    return 0;
}
