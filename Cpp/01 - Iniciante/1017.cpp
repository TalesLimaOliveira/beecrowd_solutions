#include <iostream>

int main()
{
    int hr, media_km;
    double consumo;

    std::cin >> hr;
    std::cin >> media_km;

    consumo = (hr * media_km) / 12.0;
    printf("%.3f\n", consumo);

    return 0;
}
