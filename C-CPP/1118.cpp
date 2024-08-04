#include <iostream>
#include <iomanip>

int recebe_nota(double* media) {
    double nota;
    std::cin >> nota;

    if (nota >= 0 && nota <= 10) {
        *media += nota;
        return 1;
    }

    std::cout << "nota invalida" << std::endl;
    return 0;
}

int main() {
    double media;
    int op = 1;

    while (op != 2) {
        switch (op) {
            case 1:
                media = 0;
                for (int flag = 0; flag < 2;) 
                    flag += recebe_nota(&media);
                std::cout << std::fixed << std::setprecision(2) << "media = " << media / 2.0 << std::endl;
                break;

            case 2:
                break;

            default:
                break;
        }

        std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
        std::cin >> op;
    }

    return 0;
}
