#include <iostream>
int main(void) {
    int n; std::cin >> n;
    for (int i = 0, k = 1; i < n; i++, k += 4)
        std::cout <<k<<" "<<k+1<<" "<<k+2<<" "<<"PUM"<< std::endl;
    return 0;
}
