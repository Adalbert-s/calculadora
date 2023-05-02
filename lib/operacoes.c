//opera��es
// cada qual retorna a opera��o logica da conta pedida no main

float ADICAO        (float a, float b)
{
    return (a + b);
}
float SUBTRACAO     (float a, float b)
{
    return (a - b);
}
float MULTIPLICACAO (float a, float b)
{
    return (a * b);
}
float DIVISAO       (float a, float b)
{
    return (a / b);
}

//fun��o de verifica��o
// verifica se  o operador � valido por meio de um switch, se aceito descer� o switch como se fosse uma cascata mas n�o far� nada alem de um break que sair� dele

int VERIFICACAO     (char operador, int sucesso)
{

    switch(operador)
    {

    case '+':
    case '-':
    case '*':
    case '/':
        break;
    default:            //caso operador n�o valido, ele entra nesse default que encera com um print e um sucesso 0, que l� no main continuar� com o loop
        printf("\n|Operador invalido\n");
        sucesso = 0;
    }
  return sucesso;       //retorna a variavel sucesso
}

//fun��o menu
//apenas serve para mostrar o resultado ao usuario e encaminhar as variaveis para sua fun��o respectiva por meio de um switch do operador

void Menu(float a, float b, char operador)
{

    switch(operador)
    {

    case '+':
        printf("\nResultado : %.2f \n", ADICAO(a, b));
        break;
    case '-':
        printf("\nResultado : %.2f \n",SUBTRACAO(a, b));
        break;
    case '*':
        printf("\nResultado : %.2f \n",MULTIPLICACAO(a, b));
        break;
    case '/':
        printf("\nResultado : %.2f \n",DIVISAO(a, b));
        break;
    default:
        break;
    }
}

//menu de escolha, serve para mostrar a pergunta ao usuario e repetir o programa caso desejavel
unsigned short int continuar(void)
{
    char continuar;
    int opcao = 0;

    printf("\n|Deseja continuar (s/n)?\n");
    scanf("%c", &continuar);
    if(continuar == 's' || continuar == 'S')
        opcao = 1;

    return opcao;

}
