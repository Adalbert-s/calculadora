#include "include/operacoes.h"      //inclui os arquivos da header ao codigo, necessario para o programa funcionar


int main(void)
{
    char entrada[10];//variavel que se serve como uma das condi��es para o fgets, seria como um local na qual os inputs iriam, obrigatoriamente tem que ser do tamanho declarado, sen�o provavelmente estouraria o buffer
    int     sucesso = 1;    // variavel de sucesso, indica quye o operador � valido, caso n�o �, na fun��o ele � retornado como 0
    float   a, b;           //variaveis que guardam os numeros da opera�ao
    char    operador;       //variavel que guarda o operador da conta
    unsigned short int opcao;           //variavel que determina de o usuario deseja fazer mais opera��es

    setlocale(LC_ALL, "Portuguese");    //fun��o para n�o dar erros em caracteres com acentos



    printf("\n|CALCULADORA!");          //titulo do programa
    printf("\n----------------------");

    do                      //la�o de repeti��o do menu do programa
    {
        printf("\n|Digite os valores abaixo: \n|Exemplo:(A + B)\n");
        fgets(entrada, 50, stdin); //fgets como entrada, armazenando na variavel, verificando o tamanho e stdin para a leitura dos dados

        if (sscanf(entrada, "%f %c %f", &a, &operador, &b) != 3) //verifica��o no que o usuario digitou, se caso for diferente de 3 entradas, ele mostra para o usuario e repete a pergunta
        {

            printf("|Entrada inv�lida. Tente novamente.\n");
            printf("|Siga como no exemplo: (1 + 2)\n\n");
            opcao = 0;          //garantir que o loop continuara
        }
        else
        {
            printf("\n|Calculando...");         //se caso for digitado o esperado (a + b), chama a fun��o de verifica��o para ver se o operador est� correto
            VERIFICACAO(operador, sucesso);

            if(sucesso)         // se o operador estiver correto, chama a fun��o menu que encaminha a fun��o responsavel por fazer a opera��o daquele operador
                Menu(a, b, operador);
            opcao = continuar();        //por fim, chama a fun��o que perguntar� se o usuario deseja continuar e atribui a resposta dele a variavel opcao

        }

    }
    while(!opcao);          //condi��o que determina se o loop ser� parado ou n, nesse caso, se a variavel op��o for diferente, ou seja se ela for 0, ela continuar� se repetindo
}


