#include <iostream>

int main()
{
    int di, hi, mi, si;
    int df, hf, mf, sf;
    char buffer[5];

    std::cin.get(buffer, 4);// 'Dia '
    std::cin >> di;// 'W'

    std::cin >> hi;//'X'
    std::cin.get(buffer, 3);//' : '
    std::cin >> mi;//'Y'
    std::cin.get(buffer, 3);//' : '
    std::cin >> si;//'Z'

    std::cin.getline(buffer, 0);// '\n'
    std::cin.get(buffer, 5);// 'Dia '
    std::cin >> df;// 'W'

    std::cin >> hf;//'X'
    std::cin.get(buffer, 3);//' : '
    std::cin >> mf;//'Y'
    std::cin.get(buffer, 3);//' : '
    std::cin >> sf;//'Z'

    long dur = (df*86400 + hf*3600 + mf*60 + sf) - (di*86400 + hi*3600 + mi*60 + si);
    
    std::cout << dur/86400 << " dia(s)\n";
    std::cout << (dur%86400)/3600 << " hora(s)\n";
    std::cout << ((dur%86400)%3600)/60 << " minuto(s)\n";
    std::cout << ((dur%86400)%3600)%60 << " segundo(s)\n";
    return 0;
}
