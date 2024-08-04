#include <iostream>

void my_print(int min, int max)
{
    for (int i = min+1; i < max; i++)
        if (i % 5 == 2 || i % 5 == 3)
            std::cout << i << std::endl;
}

int main(void)
{
    int x, y;
    std::cin >> x >> y;

    if (x < y) my_print(x, y);
    else my_print(y, x);

    return 0;
}
