/*************************************************************************************
Programming Skills Challenge - Siemens
Exercise 3. The program calculates the length of a string informed by the user without 
the use of any pre-existing function or method for this.
For validation purpose, please go to: https://onlinegdb.com/3nN69ZmYG

Criado em 01/03/2024 - 10:13pm
Autora: Mariana Uzeda - mariana.uzeda@gmail.com
*******************************************************************************/
#include <iostream>
#include <cstring>  

class Tam_String {
public:
    // Construtor
    Tam_String() {
        std::cout << "Digite uma string: ";
        std::cin.getline(entrada, 100);  // Utiliza diretamente o tamanho máximo do array
    }

    // Método para calcular o comprimento da string
    int CalcularComprimento() const {
        int comprimento = 0;

        // Percorre a string até encontrar o caractere nulo '\0' (fim de string)
        while (entrada[comprimento] != '\0') {
            comprimento++;
        }

        return comprimento;
    }

private:
    char entrada[100];  // Assumindo um comprimento máximo de 100 caracteres
};

int main() {
    // Criando uma instância da classe StringCalculator (RAII)
    Tam_String Tam_String;

    // Exibindo o comprimento calculado usando um método da classe
    std::cout << "Comprimento da string: " << Tam_String.CalcularComprimento() << std::endl;

    return 0;
}


