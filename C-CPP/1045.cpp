#include <iostream>

void my_swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

void my_sort(double &a, double &b, double &c) {
    if (a < b) my_swap(a, b);
    if (a < c) my_swap(a, c);
    if (b < c) my_swap(b, c);
}

int main(void)
{
    double a, b, c;
    std::cin >> a >> b >> c;

    my_sort(a, b, c);

    if(a >= b + c){
        std::cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }
        
    if((a*a) == (b*b) + (c*c))
        std::cout << "TRIANGULO RETANGULO\n";

    if((a*a) > (b*b) + (c*c))
        std::cout << "TRIANGULO OBTUSANGULO\n";
    
    if((a*a) < (b*b) + (c*c))
        std::cout << "TRIANGULO ACUTANGULO\n";

    if(a == b && b == c)
        std::cout << "TRIANGULO EQUILATERO\n";
    
    if((a == b && b != c) || (a == c && c != b) || (b == c && b != a))
        std::cout << "TRIANGULO ISOSCELES\n";

    return 0;
}
