#include <iostream>

int recebe_nota(double* media)
{
    double nota;
    std::cin >> nota;

    if (nota >= 0 && nota <= 10){
        *media += nota;
        return 1;
    }

    std::cout << "nota invalida" << std::endl;
    return 0;
}

int main(void)
{
    double media = 0;
       
    for (int flag = 0; flag < 2;)
        flag += recebe_nota(&media);
    
    std::cout << "media = " << media/2.0 << std::endl;

    return 0;
}
