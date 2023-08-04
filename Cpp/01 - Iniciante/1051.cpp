#include <iostream>
#include <iomanip>

int main(void)
{
    float sal;
    std::cin >> sal;
    std::cout << std::fixed << std::setprecision(2);

    if(sal <= 2000)
        std::cout << "Isento\n";

    else if(sal > 2000 && sal <= 3000)
        std::cout << "R$ " << (sal - 2000) * 0.08 << std::endl;
    
    else if(sal > 3000 && sal <= 4500)
        std::cout << "R$ " << ((sal - 3000)*0.18) + (1000*0.08) << std::endl;

    else if(sal > 4500)
        std::cout << "R$ " << ((sal - 4500)*0.28) + (1500*0.18) + (1000*0.08) << std::endl;

    return 0;
}
