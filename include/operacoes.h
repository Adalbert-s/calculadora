#ifndef OPERACOES_H     // "include guards" servem para evitar problemas de incluir mais de um mesmo arquivo de cabeçalho
#define OPERACOES_H     //(header file) em diferentes partes do programa


//as proximas partes do operações são declarações e includes das bibliotecas, é como se fosse a parte de cima do main, a header.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//operações

float ADICAO        (float a, float b);
float SUBTRACAO     (float a, float b);
float MULTIPLICACAO (float a, float b);
float DIVISAO       (float a, float b);

//função de verificação
int  VERIFICACAO     (char operador, int sucesso);

//menu
void Menu(float a, float b, char operador);

unsigned short int continuar(void);


#endif              //indica o fim de um bloco condicional em um arquivo de cabeçalho. Ele serve para encerrar as include guards
