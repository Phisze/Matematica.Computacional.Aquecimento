/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Calculando cosseno por aproximação
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 14 de Março de 2019, 15:59
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

/*
 * 
 * Adaptado de Yoshiko Wakabayashi
 * https://www.ime.usp.br/~yw/2008/mac115/material/cos.html
 * 
 */
int main(int argc, char** argv) {
    int n, k, sinal, i;
    double x;
    double fatorial, cosx, termo, dividendo;
    n = 10;
    for (i = 0; i < 90; i++) {
        x = i * 3.14 / 180;
        cosx = 1.0;
        sinal = 1;
        fatorial = 1.0;
        dividendo = 1.0;
        for (k = 1; k < n; k++) {
            fatorial = fatorial * (2 * k - 1) * (2 * k); //<==== calculo do fatorial
            // aproveitando o fatorial anterior.
            dividendo = dividendo * x * x;
            termo = dividendo / fatorial;
            sinal = -sinal; // para alternar o sinal do termo
            cosx = cosx + sinal * termo; // veja o uso do sinal aqui. 

        }
        printf("cos(%d) = %g\n", i, cosx);
        printf("Usando a funcao cos(.) ja' disponivel:  cos(%d) = %g\n", i, cos(x));
    }

    return (EXIT_SUCCESS);
}























