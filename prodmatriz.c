/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Produto Matricial
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 15 de Março de 2019, 21:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    printf("Digite o tamanho da matriz: ");
    scanf("%d%*c", &n);
    int a[n][n], b[n][n];
    int c[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite a posição %d %d do vetor A: ", i, j);
            scanf("%d%*c", &a[i][j]);
            printf("Digite a posição %d %d do vetor B: ", i, j);
            scanf("%d%*c", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
    }

    return (EXIT_SUCCESS);
}

