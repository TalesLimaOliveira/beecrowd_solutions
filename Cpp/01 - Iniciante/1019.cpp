#include <iostream>

int main(){
    unsigned int hrs, min, seg;
    std::cin >> seg;

    hrs = seg / 3600;
    seg %= 3600;

    min = seg / 60;
    seg %= 60;

    printf("%d:%d:%d\n", hrs, min, seg);

    return 0;
}
