#include <iostream>

int main(void){
    int a, n, soma = 0;
    std::cin >> a;

    while ((std::cin >> n) && n <= 0);
    for (int i = 0; i < n; i++, a++) soma += a;
    std::cout << soma << std::endl;

    return 0;
}
