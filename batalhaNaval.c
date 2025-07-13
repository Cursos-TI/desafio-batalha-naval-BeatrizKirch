#include <stdio.h>

int main() {
    // NÍVEL NOVATO
    // Tabuleiro 5x5 com todos os espaços iniciados em 0
    int tabuleiro[5][5] = {0};

    // Posicionamento de navio horizontal (linha 1, colunas 0 a 2)
    for (int j = 0; j < 3; j++) {
        tabuleiro[1][j] = 3; // 3 representa parte do navio
    }

    // Posicionamento de navio vertical (coluna 3, linhas 2 a 4)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][3] = 3;
    }

    printf("=== NÍVEL NOVATO ===\n");
    printf("Coordenadas dos navios posicionados:\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("Navio em: (%d, %d)\n", i, j);
            }
        }
    }

    printf("\n");

    // NÍVEL AVENTUREIRO
    int tabuleiroGrande[10][10] = {0};

    // 1º Navio horizontal: linha 2, colunas 1 a 4
    for (int j = 1; j <= 4; j++) {
        tabuleiroGrande[2][j] = 3;
    }

    // 2º Navio vertical: coluna 7, linhas 5 a 8
    for (int i = 5; i <= 8; i++) {
        tabuleiroGrande[i][7] = 3;
    }

    // 3º Navio diagonal (principal): (0,0) → (3,3)
    for (int i = 0; i < 4; i++) {
        tabuleiroGrande[i][i] = 3;
    }

    // 4º Navio diagonal (secundária): (0,9) → (3,6)
    for (int i = 0; i < 4; i++) {
        tabuleiroGrande[i][9 - i] = 3;
    }

    printf("=== NÍVEL AVENTUREIRO ===\n");
    printf("Tabuleiro completo (0 = livre, 3 = navio):\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroGrande[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // NÍVEL MESTRE

    // Matriz 5x5 para habilidades especiais
    int habilidade[5][5];

    // Habilidade em CONE (padrão pirâmide)
    printf("=== NÍVEL MESTRE ===\n");
    printf("Habilidade: CONE\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // Cone centrado na linha 2
            if (i == 2 || (i == 1 && j >= 1 && j <= 3) || (i == 0 && j == 2)) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade: CRUZ\n");

    // Cruz centrada em (1,2)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1 || j == 2) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade: OCTAEDRO\n");

    // Octaedro centrado em (1,2)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || i == 2) && j == 2) {
                habilidade[i][j] = 1;
            } else if (i == 1 && j >= 1 && j <= 3) {
                habilidade[i][j] = 1;
            } else {
                habilidade[i][j] = 0;
            }
            printf("%d ", habilidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
