#include <iostream>

int main(){
    float i = 0, j = 1;
    while(i <= 2.1){
        std::cout << "I=" << i << " J=" << j+i << std::endl;
        std::cout << "I=" << i << " J=" << j+1+i << std::endl;
        std::cout << "I=" << i << " J=" << j+2+i << std::endl;
        i+= 0.2;
    }
    return 0;
}