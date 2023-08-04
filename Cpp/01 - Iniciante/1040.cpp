#include <iostream>
#include <iomanip>

void verify(float media)
{
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Media: " << media << std::endl;

    if (media >= 7.0){
        std::cout << "Aluno aprovado.\n";
        return;
    }

    if (media < 5.0){
        std::cout << "Aluno reprovado.\n";
        return;
    }
    
    std::cout << "Aluno em exame.\n";
    
    float prova;
    std::cin >> prova;
    std::cout << "Nota do exame: " << prova << std::endl;

    media = (media + prova) / 2.0;

    if (media >= 5.0)
        std::cout << "Aluno aprovado.\n";
    else
        std::cout << "Aluno reprovado.\n";

    std::cout << "Media final: " << media << std::endl;
}

int main()
{
    float nota1, nota2, nota3, nota4;
    std::cin >> nota1 >> nota2 >> nota3 >> nota4;

    verify(((nota1 * 2)+(nota2 * 3)+(nota3 * 4)+(nota4 * 1))/10.0);
    return 0;    
}