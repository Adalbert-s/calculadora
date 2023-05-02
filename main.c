#include "include/operacoes.h"      //inclui os arquivos da header ao codigo, necessario para o programa funcionar


int main(void)
{
    char entrada[10];//variavel que se serve como uma das condições para o fgets, seria como um local na qual os inputs iriam, obrigatoriamente tem que ser do tamanho declarado, senão provavelmente estouraria o buffer
    int     sucesso = 1;    // variavel de sucesso, indica quye o operador é valido, caso não é, na função ele é retornado como 0
    float   a, b;           //variaveis que guardam os numeros da operaçao
    char    operador;       //variavel que guarda o operador da conta
    unsigned short int opcao;           //variavel que determina de o usuario deseja fazer mais operações

    setlocale(LC_ALL, "Portuguese");    //função para não dar erros em caracteres com acentos



    printf("\n|CALCULADORA!");          //titulo do programa
    printf("\n----------------------");

    do                      //laço de repetição do menu do programa
    {
        printf("\n|Digite os valores abaixo: \n|Exemplo:(A + B)\n");
        fgets(entrada, 50, stdin); //fgets como entrada, armazenando na variavel, verificando o tamanho e stdin para a leitura dos dados

        if (sscanf(entrada, "%f %c %f", &a, &operador, &b) != 3) //verificação no que o usuario digitou, se caso for diferente de 3 entradas, ele mostra para o usuario e repete a pergunta
        {

            printf("|Entrada inválida. Tente novamente.\n");
            printf("|Siga como no exemplo: (1 + 2)\n\n");
            opcao = 0;          //garantir que o loop continuara
        }
        else
        {
            printf("\n|Calculando...");         //se caso for digitado o esperado (a + b), chama a função de verificação para ver se o operador está correto
            VERIFICACAO(operador, sucesso);

            if(sucesso)         // se o operador estiver correto, chama a função menu que encaminha a função responsavel por fazer a operação daquele operador
                Menu(a, b, operador);
            opcao = continuar();        //por fim, chama a função que perguntará se o usuario deseja continuar e atribui a resposta dele a variavel opcao

        }

    }
    while(!opcao);          //condição que determina se o loop será parado ou n, nesse caso, se a variavel opção for diferente, ou seja se ela for 0, ela continuará se repetindo
}


