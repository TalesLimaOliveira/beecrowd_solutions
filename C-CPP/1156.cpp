#include <iostream>
#include <iomanip>

int main(void){
    double s = 1.00;
    for (double i = 3, j = 2; i <= 39; i +=2, j *= 2)
        s += (i/j);
    std::cout << std::fixed << std::setprecision(2) << s << std::endl;
    return 0;
}
