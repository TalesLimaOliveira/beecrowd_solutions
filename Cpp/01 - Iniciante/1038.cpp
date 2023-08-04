#include <iostream>
#include <iomanip>

int main()
{
    int cod, qtd;
    std::cin >> cod >> qtd;   

    double lanches[] = {4.00, 4.50, 5.00, 2.00, 1.50};

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total: R$ " << lanches[cod - 1] * qtd << std::endl;

    return 0;
}
