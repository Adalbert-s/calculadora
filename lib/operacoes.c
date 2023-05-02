//operações
// cada qual retorna a operação logica da conta pedida no main

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

//função de verificação
// verifica se  o operador é valido por meio de um switch, se aceito descerá o switch como se fosse uma cascata mas não fará nada alem de um break que sairá dele

int VERIFICACAO     (char operador, int sucesso)
{

    switch(operador)
    {

    case '+':
    case '-':
    case '*':
    case '/':
        break;
    default:            //caso operador não valido, ele entra nesse default que encera com um print e um sucesso 0, que lá no main continuará com o loop
        printf("\n|Operador invalido\n");
        sucesso = 0;
    }
  return sucesso;       //retorna a variavel sucesso
}

//função menu
//apenas serve para mostrar o resultado ao usuario e encaminhar as variaveis para sua função respectiva por meio de um switch do operador

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
