#include <iostream>
#include <iomanip>

void novo_salario(float sal, int percent)
{
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Novo salario: " << sal + (sal * percent / 100.0);
    std::cout << "\nReajuste ganho: " << sal * percent / 100.0;
    std::cout << "\nEm percentual: " << percent << " %\n";
}

int main(void)
{
    float sal;
    std::cin >> sal;

    if (sal >= 0 && sal <= 400)  novo_salario(sal, 15);
    else if (sal > 400 && sal <= 800) novo_salario(sal, 12);
    else if (sal > 800 && sal <= 1200) novo_salario(sal, 10);
    else if (sal > 1200 && sal <= 2000) novo_salario(sal, 7);
    else if (sal > 2000) novo_salario(sal, 4);
    
    return 0;
}
