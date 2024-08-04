#include <iostream>

int main(void)
{
    int n, in = 0, out = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        std::cin >> x;

        if (x >= 10 && x <= 20) in++;
        else out++;
    }

    std::cout << in << " in\n" << out << " out\n";    
    return 0;
}
