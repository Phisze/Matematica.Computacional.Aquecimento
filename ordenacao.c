/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Ordenação de Vetores
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 15 de Março de 2019, 13:24
 */

#include <stdio.h>
#include <stdlib.h>

void ordenaSelect(int n, float *A) {
    float MenorChave;
    int indice;
    for (int i = 0; i < n - 1; i++) {
        MenorChave = A[i];
        indice = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < MenorChave) {
                MenorChave = A[j];
                indice = j;
            }
        }
        int temp;
        temp = A[i];
        A[i] = A[indice];
        A[indice] = temp;
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    printf("Digite o numero de posições do array: ");
    scanf("%d%*c", &n);
    float *a;
    a = malloc(n * sizeof (float));
    int i;
    for (i = 0; i < n; i++) {
        printf("Digte o numero no array: ");
        scanf("%f%*c", &a[i]);
    }
    ordenaSelect(n, a);
    for (i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }

    return (EXIT_SUCCESS);
}

