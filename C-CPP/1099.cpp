#include <iostream>

void sum_odd(int min, int max)
{
    int soma = 0;
    for (int i = min+1; i < max; i++)
        if (i % 2 != 0) soma += i;
        
    std::cout << soma << std::endl;
}

int main(void)
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        int a, b;
        std::cin >> a >> b;
        if(a < b) sum_odd(a, b);
        else sum_odd(b, a);
    }
    
    return 0;
}
