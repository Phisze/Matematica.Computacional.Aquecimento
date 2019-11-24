/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Representação de Polinômio
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 14 de Março de 2019, 19:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    do {
        printf("\nDeseja avaliar\n1 - Sim\n2 - Não\n");
        scanf("%d%*c", &op);
        printf("\nDigite o valor do X: ");
        scanf("%f%*c", &x);

        if (op == 1) {
            for (int i = 0; i < n; i++) {
                fx = fx + p[i].numero * pow(x, p[i].grau);
            }
            printf("O valor é: %f", fx);
        }
    } while (op != 2);
    free(p);

    return (EXIT_SUCCESS);
}









