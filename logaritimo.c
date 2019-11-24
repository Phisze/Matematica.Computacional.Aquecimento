/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Calculando Logarítmo Natural por Aproximação
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 14 de Março de 2019, 17:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *
 */
int main(int argc, char** argv) {
    int n;
    double x;
    double q;
    int sinal = 1;
    float e;
    printf("Digite a quantidade de termos a ser usada no somatório: ");
    scanf("%d%*c", &n);
    printf("Digite o valor de x cujo resultado deve ser calculado entre 0 e 2: ");
    scanf("%lf%*c", &x);

    for (int i = 1; i < n; i++) {
        q = q + (sinal * ((pow((x - 1), i)) / i));
        sinal = -sinal;
    }
    e = fabs(q - log(x)) / (log(x));
    printf("\nResultado: %f Erro: %f Log(%g) = %g", q, e, x, log(x));
    return (EXIT_SUCCESS);
}

