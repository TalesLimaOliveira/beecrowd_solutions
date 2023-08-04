#include <iostream>

int main()
{
    float a, b, c, d, e, f;
    int n = 0;
    std::cin >> a >> b >> c >> d >> e >> f;

    if (a > 0.0) n++;
    if (b > 0.0) n++;
    if (c > 0.0) n++;
    if (d > 0.0) n++;
    if (e > 0.0) n++;
    if (f > 0.0) n++;

    std::cout << n << " valores positivos\n";
    return 0;
}
