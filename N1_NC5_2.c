#include <stdio.h>
 
int main() {
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Sergio";
 
   //printf("A idade do %s é: %d\n", nome, idade);
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);
 
    return 0;
}
/*
prinf("%formato1 %formato2 %formato3, variavel1,variavel2,variavel3")

%d: Imprime um inteiro no formato decimal
%i: Equivale a %d
%f: Imprime um número de ponto flutuante (float) no formato padrão
%e: Imprime um número de ponto flutuante no formato exponencial
%c: Imprime um caractere
%s: Imprime uma string (sequência de caracteres)
*/
