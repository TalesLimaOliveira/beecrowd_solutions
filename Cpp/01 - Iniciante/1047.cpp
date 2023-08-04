#include <iostream>

int main()
{
    int hrs_init, hrs_final, min_init, min_final;
    std::cin >> hrs_init >> min_init >> hrs_final >>  min_final;

    int total_srt_min = hrs_init * 60 + min_init;
    int total_end_min = hrs_final * 60 + min_final;
    int total_minutes = total_end_min - total_srt_min;

    if (total_minutes <= 0)
        total_minutes += 24 * 60;

    std::cout
        << "O JOGO DUROU " << total_minutes / 60
        << " HORA(S) E " << total_minutes % 60 << " MINUTO(S)\n";

    return 0;
}
