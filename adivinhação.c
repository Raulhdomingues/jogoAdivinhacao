#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

 
 printf("    |Zz.                      |Zz.                            \n");
 printf("    |                         |                               \n");
 printf("   _L__                      _|                               \n"); 
 printf("  (____)      _             /__\\                             \n");
 printf("  /____\\     /_\\           /____\\        Bem vindo ao        \n");
 printf(" (______)    | |          (______)   Jogo da Adivinhacao!     \n");
 printf("  |  U |_____| |___________| U  |                             \n");
 printf("  |u   | |  |   __   |  |  |   u|                             \n");
 printf("  |    | |  |  ||||  |  |  |    |                             \n");
 printf("  -------------""""--------------js                           \n");
 printf("\n\n");


    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();

    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    
    int acertou = 0; 

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numeroDeTentativas;

    switch (nivel) {
        case 1: 
            numeroDeTentativas = 20;
            break;
        case 2: 
            numeroDeTentativas = 15;
            break;
        default:
            numeroDeTentativas = 6;
            break;
    }


    for (int i = 1; i <= numeroDeTentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n\n", chute);

        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n\n");
            continue;
        }

        acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;


        if(acertou) {
            break;
        } 

        else if(maior){
            printf("O seu numero foi maior que o numero secreto.\n\n");
        } 
        else{
            printf("O seu numero foi menor que o numero secreto.\n\n");
        }

        tentativas++;

        double pontosPerdidos = abs(chute - numeroSecreto) / 2;
        pontos = pontos - pontosPerdidos;
    }

    printf("Fim de Jogo!\n");

    if(acertou) {

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabens! Voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);

} else {
        printf("Voce perdeu! Tente de novo!\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");


}
    


    
    


}





    