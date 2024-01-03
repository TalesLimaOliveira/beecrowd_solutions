#include <iostream>

void problem()
{
    int n, flag = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++){
        if (n % i == 0)
            flag++;
            
        if (flag > 2){
            std::cout << n << " nao eh primo" << std::endl;
            return;
        }
    }

    std::cout << n << " eh primo" << std::endl; 
}

int main(void)
{
    int tc;
    std::cin >> tc;

    for (int i = 0; i < tc; i++)
        problem();
        
    return 0;
}
