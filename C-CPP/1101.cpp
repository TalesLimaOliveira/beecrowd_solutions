#include <iostream>

void sum(int min, int max)
{
    int sum = 0;
    for (int i = min; i <= max; i++){
        std::cout << i << " ";
        sum += i;
    }
    std::cout << "Sum=" << sum << std::endl;
}

int main(void)
{
    int n, m;
    while ((std::cin >> n >> m) && n > 0 && m > 0){
        if(n < m) sum(n, m);
        else sum(m, n);
    }
    
    return 0;
}
