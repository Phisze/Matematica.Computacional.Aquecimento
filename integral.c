/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Integração de Polinômio
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 15 de Março de 2019, 07:22
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float numero;
    int grau;
} polinomio;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    int op;
    float fx = 0;
    float x;
    printf("Digite o numero de graus: ");
    scanf("%d%*c", &n);

    polinomio *p;
    p = malloc(n * sizeof (polinomio));

    for (int i = 0; i < n; i++) {
        printf("\nDigite o grau: ");
        scanf("%d%*c", &p[i].grau);
        printf("\nDigite o coficiente: ");
        scanf("%f%*c", &p[i].numero);
    }

    for (int i = 0; i < n; i++) {
        printf("\nIntegrando\n");
        p[i].grau = p[i].grau + 1;
        p[i].numero = p[i].grau / p[i].grau;
        if (i == 0) {
            printf("%f*X^%d", p[i].numero, p[i].grau);
        } else if (p[i].numero > 0) {
            printf("+%f*X^%d", p[i].numero, p[i].grau);
        } else if (p[i].numero < 0) {
            printf("-%f*X^%d", p[i].numero, p[i].grau);
        }
    }

    return (EXIT_SUCCESS);
}