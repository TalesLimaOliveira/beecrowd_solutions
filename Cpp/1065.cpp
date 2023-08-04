#include <iostream>

int main(){
    int n, par = 0;

    for (int i = 0; i < 5; i++){
        std::cin >> n;
        if (n % 2 == 0) par++;
    }  
 
    std::cout << par << " valores pares\n";
    return 0;
}
