/* ================================================================== *
    Universidade Federal de Sao Carlos - UFSCar, Sorocaba

    Disciplina: Algoritmos e Programação 1
    Prof. Tiago A. Almeida

    Lista 08 - Exercício 02 - Calculadora de números complexos

    Instrucoes
    ----------

    Este arquivo contem o codigo que auxiliara no desenvolvimento do
    exercicio. Voce precisara completar as partes requisitadas.

* ================================================================== *
    Dados do aluno:

    RA: 620610
    Nome: Jacques Simões da Silva Junior

* ================================================================== */
#include <stdio.h>


//Definindo a frase de opção inválida
#define FRASE_OPCAO_INVALIDA "Erro: Opção inválida!\n"

//Valores de controle
//#define FALSE   0
//#define TRUE    1

typedef float Complexo;
int main () {
    int opcao; //opção desejada do menu 
    char i;
    Complexo num1, num2, result;
    float a, b, c, d;             
            
             scanf ("%f", &a);
             scanf ("%f", &b);
             scanf ("%f", &c);
             scanf ("%f", &d);
             scanf ("%d", &opcao);
             
    switch (opcao) {

    case 0:
        printf(FRASE_OPCAO_INVALIDA);
        scanf ("%d", &opcao);

    case 1:
    num1 = (a+c);
    num2 = (b+d);
        if (num2>0){
            printf("%.2f+%.2f%c\n", num1, num2, i);
            } else
        printf("%.2f%.2f%c\n", num1, num2, i);      
    break;

    case 2:
    num1 = (a-c);
    num2 = (b-d);
        if (num2>0){
            printf("%.2f+%.2f%c\n", num1, num2, i);
            } else
        printf("%.2f%.2f%c\n", num1, num2, i);
    break;

    case 3:
    num1 = ((a*c)+(b*d));
    num2 = ((a*d)+(b*c));
        if (num2>0){
            printf("%.2f+%.2f%c\n", num1, num2, i);
            } else
        printf("%.2f%.2f%c\n", num1, num2, i);   
    break;

    case 4:
             scanf ("%f", &a);
             scanf ("%f", &b);
             scanf ("%f", &c);
             scanf ("%f", &d);
             scanf ("%d", &opcao);

    case 5:
    return 0;
    break; 
    }       
}
