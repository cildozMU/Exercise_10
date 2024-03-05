/*************************************************************************************
Programming Skills Challenge - Siemens
Exercise 3. The program calculates the length of a string informed by the user without 
the use of any pre-existing function or method for this.
For validation purpose, please go to: https://onlinegdb.com/3nN69ZmYG

Criado em 01/03/2024 - 10:13pm
Autora: Mariana Uzeda - mariana.uzeda@gmail.com
*************************************************************************************/
#include <iostream>
/*************************************************************************************
Programa Principal
*************************************************************************************/
int main() {
    // Solicita ao usuário que insira uma string
    std::cout << "Digite uma string: ";

    // Lê a string inserida pelo usuário
    char entrada[100];  // Assumindo um comprimento máximo de 100 caracteres
    std::cin.getline(entrada, 100);  // Utiliza diretamente o tamanho máximo do array

    // Calcula o comprimento da string sem utilizar funções pré-existentes
    int comprimento = 0;

    // Percorre a string até encontrar o caractere nulo '\0' (fim de string)
    while (entrada[comprimento] != '\0') {
        comprimento++;
    }

    // Exibe o comprimento calculado
    std::cout << "Comprimento da string: " << comprimento << std::endl;

    return 0;
}


