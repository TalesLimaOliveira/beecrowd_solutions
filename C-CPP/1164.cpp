#include <iostream>

void num_perf()
{
    int n, soma = 0;
    std::cin >> n;

    for (int i = 1; i < n; i++)
        if (n % i == 0)
            soma += i;
    
    if (soma == n)
        std::cout << n << " eh perfeito" << std::endl;
    else
        std::cout << n << " nao eh perfeito" << std::endl; 
}

int main(void)
{
    int tc;
    std::cin >> tc;

    for (int i = 0; i < tc; i++)
       num_perf();
        
    return 0;
}
