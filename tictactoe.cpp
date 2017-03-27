#include <bits/stdc++.h>
using namespace std;

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

char tab[15] = {"         "};

int col[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

void imprimeTabuleiro () {
    printf("\n\n");
    if (col[0] == 1) printf(BOLDRED "%c" RESET, tab[0]);
    else if (col[0] == 2) printf(BOLDBLUE "%c" RESET, tab[0]);
    else printf("%c", tab[0]);
    printf(" | ");
    if (col[1] == 1) printf(BOLDRED "%c" RESET, tab[1]);
    else if (col[1] == 2) printf(BOLDBLUE "%c" RESET, tab[1]);
    else printf("%c", tab[1]);
    printf(" | ");
    if (col[2] == 1) printf(BOLDRED "%c" RESET, tab[2]);
    else if (col[2] == 2) printf(BOLDBLUE "%c" RESET, tab[2]);
    else printf("%c", tab[2]);
    printf("\n---------\n");
    if (col[3] == 1) printf(BOLDRED "%c" RESET, tab[3]);
    else if (col[3] == 2) printf(BOLDBLUE "%c" RESET, tab[3]);
    else printf("%c", tab[3]);
    printf(" | ");
    if (col[4] == 1) printf(BOLDRED "%c" RESET, tab[4]);
    else if (col[4] == 2) printf(BOLDBLUE "%c" RESET, tab[4]);
    else printf("%c", tab[4]);
    printf(" | ");
    if (col[5] == 1) printf(BOLDRED "%c" RESET, tab[5]);
    else if (col[5] == 2) printf(BOLDBLUE "%c" RESET, tab[5]);
    else printf("%c", tab[5]);
    printf("\n---------\n");
    if (col[6] == 1) printf(BOLDRED "%c" RESET, tab[6]);
    else if (col[6] == 2) printf(BOLDBLUE "%c" RESET, tab[6]);
    else printf("%c", tab[6]);
    printf(" | ");
    if (col[7] == 1) printf(BOLDRED "%c" RESET, tab[7]);
    else if (col[7] == 2) printf(BOLDBLUE "%c" RESET, tab[7]);
    else printf("%c", tab[7]);
    printf(" | ");
    if (col[8] == 1) printf(BOLDRED "%c" RESET, tab[8]);
    else if (col[8] == 2) printf(BOLDBLUE "%c" RESET, tab[8]);
    else printf("%c", tab[8]);
    printf("\n");
    return;
}

void imprimeModelo () {
    printf("\n\n");
    printf("1");
    printf(" | ");
    printf("2");
    printf(" | ");
    printf("3");
    printf("\n---------\n");
    printf("4");
    printf(" | ");
    printf("5");
    printf(" | ");
    printf("6");
    printf("\n---------\n");
    printf("7");
    printf(" | ");
    printf("8");
    printf(" | ");
    printf("9");
    printf("\n\n\n");
    return;
}

int main () {

    int jogadas = 0;
    while (1) {
        int x, jog = 0;
        char chr;
        string s;
        imprimeModelo();
        while (1) {
            printf("Jogador 1, sua vez! Digite um número: ");
            x = scanf("%d", &jog);
            if (!x) {
                printf("Jogada invalida! Tente novamente.\n");
                chr = 0;
                while (chr != 10) scanf("%c", &chr);
                continue;
            }
            if (jog < 1 or jog > 9) {
                printf("Jogada invalida! Tente novamente.\n");
                continue;
            }
            if (tab[jog-1] != 32) {
                printf("Jogada invalida! Tente novamente.\n");
                continue;
            }
            tab[jog-1] = 88;
            col[jog-1] = 1;
            break;
        }
        jogadas++;
        imprimeTabuleiro();
        if (tab[0] == 88 and tab[1] == 88 and tab[2] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[3] == 88 and tab[4] == 88 and tab[5] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[6] == 88 and tab[7] == 88 and tab[8] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[0] == 88 and tab[3] == 88 and tab[6] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[1] == 88 and tab[4] == 88 and tab[7] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[2] == 88 and tab[5] == 88 and tab[8] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[0] == 88 and tab[4] == 88 and tab[8] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[2] == 88 and tab[4] == 88 and tab[6] == 88) {
            printf(BOLDRED "\nParabens, jogador 1! VOCE VENCEU!\n" RESET);
            break;
        }
        if (jogadas == 9) {
            printf("\nDeu velha!! Ninguem venceu. :(\n");
            break;
        }
        imprimeModelo();
        while (1) {
            printf("Jogador 2, sua vez! Digite um número: ");
            x = scanf("%d", &jog);
            if (!x) {
                printf("Jogada invalida! Tente novamente.\n");
                chr = 0;
                while (chr != 10) scanf("%c", &chr);
                continue;
            }
            if (jog < 1 or jog > 9){
                printf("Jogada invalida! Tente novamente.\n");
                continue;
            }
            if (tab[jog-1] != 32) {
                printf("Jogada invalida! Tente novamente.\n");
                continue;
            }
            tab[jog-1] = 79;
            col[jog-1] = 2;
            break;
        }
        jogadas++;
        imprimeTabuleiro();
        if (tab[0] == 79 and tab[1] == 79 and tab[2] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[3] == 79 and tab[4] == 79 and tab[5] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[6] == 79 and tab[7] == 79 and tab[8] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[0] == 79 and tab[3] == 79 and tab[6] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[1] == 79 and tab[4] == 79 and tab[7] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[2] == 79 and tab[5] == 79 and tab[8] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[0] == 79 and tab[4] == 79 and tab[8] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (tab[2] == 79 and tab[4] == 79 and tab[6] == 79) {
            printf(BOLDBLUE "\nParabens, jogador 2! VOCE VENCEU!\n" RESET);
            break;
        }
        if (jogadas == 9) {
            printf("\nDeu velha!! Ninguem venceu. :(\n");
            break;
        }
    }
    return 0;
}
