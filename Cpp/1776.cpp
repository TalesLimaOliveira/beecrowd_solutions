/*
Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

Entrada
A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.

Saída
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.

Exemplo de Entrada
3
0
4
2

Exemplo de Saída
Fib(0) = 0
Fib(4) = 3
Fib(2) = 1
*/

#include <iostream>

int main(void){
    int cases, n;
    
    std::cin >> cases;
    if(cases == 0) return 0;

    unsigned long long fib[61] = {0};
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 60; i++)
        fib[i] = fib[i-2] + fib[i-1];
    
    for(int i = 0; i < cases; i++){
        std::cin >> n;
        std::cout << "Fib(" << n << ") = " << fib[n] << std::endl;
    }
            
    return 0;
}  