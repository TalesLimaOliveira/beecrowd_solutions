#include <iostream>
int main(void){
    for (int i = 1; i < 10; i += 2)
        for (int j = 7; j > 4; j--)
            std::cout << "I=" << i << " J=" << j << std::endl;
    return 0;
}
