#include <stdio.h>

int Op;
char Dec = 'n';
float Aux, Sec;
//Variáveis Globais

int Soma();
int Sub();
int Div();
int Mult();
//Chamada de funções externas

int main() { //Função Principal
    system("clear"); //Limpa o terminal
    printf("=====================\n");
    printf(" CALCULADORA SIMPLES\n");
    printf("=====================\n");

    printf("[1] - Somar(+)\n");
    printf("[2] - Subtrair(-)\n");
    printf("[3] - Dividir(/)\n");
    printf("[4] - Multiplicar(*)\n\n");
    printf("[5] - Sair\n");

    printf("\n=========\n");
    printf("Opção: ");
    scanf("%d", &Op); //Escolha do usuário

    switch(Op) {
        case 1:
            Soma();
            
            break;

        case 2:
            Sub();

            break;

        case 3:
            Div();

            break;

        case 4:
            Mult();

            break;

        case 5:
            system("clear");
            printf("#################\n");
            printf(" Fim da execução\n");
            printf("#################\n\n");

            break;

    }

    return 0;
}
int Soma() { // Função Soma()
    system("clear");
    printf("=======\n");
    printf(" SOMAR\n");
    printf("=======\n");

    printf("Digite um número: ");
    scanf("%f", &Aux);

    do {
        printf("Digite outro número: ");
        scanf("%f", &Sec);

        Aux = Aux + Sec;

        printf("\n----------------------------\n");
        printf("Somar mais algum? [s/n]: ");
        scanf("%s", &Dec);


    } while(Dec == 's');

    system("clear");
    printf("=======================\n");
    printf(" Resultado Final: %.2f\n", Aux);
    printf("=======================\n");

    printf("[1] - Resetar\n");
    printf("[2] - Voltar\n");

    printf("\n=========\n");
    printf("Opção: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            Soma();

            break;

        case 2:
            main();

            break;

        default:
            system("clear");
            printf("Valor inválido, tente novamente...\n");
            sleep(1);
            system("clear");
            main();

            break;
            
    }


    return 0;

} // Fim da função Soma()

int Sub() {// Função Sub()
    system("clear");
    printf("==========\n");
    printf(" SUBTRAIR\n");
    printf("==========\n");

    printf("Digite um número: ");
    scanf("%f", &Aux);

    do {
        printf("Digite outro número: ");
        scanf("%f", &Sec);

        Aux = Aux - Sec;

        printf("\n----------------------------\n");
        printf("Subtrair mais algum? [s/n]: ");
        scanf("%s", &Dec);


    } while(Dec == 's');

    system("clear");
    printf("=======================\n");
    printf(" Resultado Final: %.2f\n", Aux);
    printf("=======================\n");

    printf("[1] - Resetar\n");
    printf("[2] - Voltar\n");

    printf("\n=========\n");
    printf("Opção: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            Sub();

            break;

        case 2:
            main();

            break;

        default:
            system("clear");
            printf("Valor inválido, tente novamente...\n");
            sleep(1);
            system("clear");
            main();

            break;
            
    }


    return 0;

} // Fim da função Sub()

int Div() { // Função Div()
    system("clear");
    printf("=========\n");
    printf(" DIVIDIR\n");
    printf("=========\n");

    printf("Digite um número: ");
    scanf("%f", &Aux);

    do {
        printf("Digite outro número: ");
        scanf("%f", &Sec);

        Aux = Aux / Sec;

        printf("\n----------------------------\n");
        printf("Dividir mais algum? [s/n]: ");
        scanf("%s", &Dec);


    } while(Dec == 's');

    system("clear");
    printf("=======================\n");
    printf(" Resultado Final: %.2f\n", Aux);
    printf("=======================\n");

    printf("[1] - Resetar\n");
    printf("[2] - Voltar\n");

    printf("\n=========\n");
    printf("Opção: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            Div();

            break;

        case 2:
            main();

            break;

        default:
            system("clear");
            printf("Valor inválido, tente novamente...\n");
            sleep(1);
            system("clear");
            main();

            break;
            
    }

    return 0;

} // Fim da função Div()

int Mult() { //Função Mult()
    system("clear");
    printf("=============\n");
    printf(" MULTIPLICAR\n");
    printf("=============\n");

    printf("Digite um número: ");
    scanf("%f", &Aux);

    do {
        printf("Digite outro número: ");
        scanf("%f", &Sec);

        Aux = Aux * Sec;

        printf("\n------------------------------\n");
        printf("Multiplicar mais algum? [s/n]: ");
        scanf("%s", &Dec);


    } while(Dec == 's');

    system("clear");
    printf("=======================\n");
    printf(" Resultado Final: %.2f\n", Aux);
    printf("=======================\n");

    printf("[1] - Resetar\n");
    printf("[2] - Voltar\n");

    printf("\n=========\n");
    printf("Opção: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            Mult();

            break;

        case 2:
            main();

            break;

        default:
            system("clear");
            printf("Valor inválido, tente novamente...\n");
            sleep(1);
            system("clear");
            main();

            break;
            
    }

    return 0;

} // Fim da função Mult()