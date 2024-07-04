#include <stdio.h>

int esta_no_conjunto(int num, int conjunto[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (conjunto[i] == num) {
            return 1;
        }
    }
    return 0;
}


void imprimir_conjunto(int conjunto[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", conjunto[i]);
    }
    printf("\n");
}

int main() {
    int A[8], B[8], C[8];
    int tamanhoA, tamanhoB, tamanhoC;
    int intersecao[8], uniao[24];
    int tamanhoIntersecao, tamanhoUniao;
    int num;
    int i;

    while (1) {

        tamanhoA = tamanhoB = tamanhoC = 0;

        while (scanf("%d", &num) && num != -1 && num != -2) {
            A[tamanhoA++] = num;
        }
        if (num == -2) break;

        while (scanf("%d", &num) && num != -1) {
            B[tamanhoB++] = num;
        }

        while (scanf("%d", &num) && num != -1) {
            C[tamanhoC++] = num;
        }


        tamanhoIntersecao = 0;
        for (i = 0; i < tamanhoA; i++) {
            if (esta_no_conjunto(A[i], B, tamanhoB) && esta_no_conjunto(A[i], C, tamanhoC)) {
                intersecao[tamanhoIntersecao++] = A[i];
            }
        }


        tamanhoUniao = 0;
        for (i = 0; i < tamanhoA; i++) {
            uniao[tamanhoUniao++] = A[i];
        }
        for (i = 0; i < tamanhoB; i++) {
            if (!esta_no_conjunto(B[i], A, tamanhoA)) {
                uniao[tamanhoUniao++] = B[i];
            }
        }
        for (i = 0; i < tamanhoC; i++) {
            if (!esta_no_conjunto(C[i], A, tamanhoA) && !esta_no_conjunto(C[i], B, tamanhoB)) {
                uniao[tamanhoUniao++] = C[i];
            }
        }

        imprimir_conjunto(intersecao, tamanhoIntersecao);
        imprimir_conjunto(uniao, tamanhoUniao);
    }
    return 0;
}