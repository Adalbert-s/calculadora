#ifndef OPERACOES_H     // "include guards" servem para evitar problemas de incluir mais de um mesmo arquivo de cabe�alho
#define OPERACOES_H     //(header file) em diferentes partes do programa


//as proximas partes do opera��es s�o declara��es e includes das bibliotecas, � como se fosse a parte de cima do main, a header.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//opera��es

float ADICAO        (float a, float b);
float SUBTRACAO     (float a, float b);
float MULTIPLICACAO (float a, float b);
float DIVISAO       (float a, float b);

//fun��o de verifica��o
int  VERIFICACAO     (char operador, int sucesso);

//menu
void Menu(float a, float b, char operador);

unsigned short int continuar(void);


#endif              //indica o fim de um bloco condicional em um arquivo de cabe�alho. Ele serve para encerrar as include guards
