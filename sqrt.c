/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Raiz Quadrada por Aproximação
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 * Created on 14 de Março de 2019, 13:51
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
float raizQuadAprox(float numero, float inicial, float erro) {
    float x = inicial;
    float diferenca = 0;
    float w = 0;
    do {
        w = x;
        x = (x + (numero / x))*0.5;
        diferenca = fabs(x - w);
    } while (diferenca >= erro);
    return x;
}

int main(int argc, char** argv) {
    float a = 0;
    float e = 0;
    printf("\n Numero da Raiz: ");
    scanf("%f%*c", &a);
    printf("\n Erro aceitavel: ");
    scanf("%f%*c", &e);
    float x = raizQuadAprox(a, a/2, e);
    printf("\n%f", x);
    return (EXIT_SUCCESS);
}

