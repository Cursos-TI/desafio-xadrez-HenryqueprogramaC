#include <stdio.h>

int main() {
    int i = 0;
    int movimento = 10;
    int opcao;
    int movicomplet = 1;

    while (1) { 
        printf("* BEM VINDO AO JOGO DE XADREZ CODIFICADO *\n");
        printf("1. Jogar\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        printf("Escolha uma opção. \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Escolha o movimento do bispo de 1 a 5: \n");
                scanf("%d", &movimento);

                for (i = 0; i < movimento; i++) {
                    printf("Cima \n");
                    printf("Direita\n");
                }

                i = 0;

                printf("Escolha o movimento da torre de 1 a 5: \n");
                scanf("%d", &movimento);

                while (i < movimento) {
                    printf("Direita \n");
                    i++;
                }

                i = 0;
                printf("Diga o movimento da rainha de 1 a 8: \n");
                scanf("%d", &movimento);

                do {
                    printf("Esquerda\n");
                    i++;
                } while (i < movimento);

                printf("Movimento do cavalo:\n");

                movicomplet = 1;
                while (movicomplet--) {
                    for (i = 0; i < 2; i++) {
                        printf("Cima\n");
                    }
                    printf("Direita\n");
                }
                break;

            case 2:
                printf("O jogo imprime os movimentos de peças de xadrez de forma basica e direta.\n\n");
                break;

            case 3:
                printf("Saindo...\n");
                return 0;

            default:
                printf("Opção invalida, tente novamente.\n");
                break;
        }
    }

    return 0;
}
 
