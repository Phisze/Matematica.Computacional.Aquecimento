/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Cálculando a Razão Áurea por Fibonacci
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 14 de Março de 2019, 18:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, p = 1, s = 1, prox;
    float aureaAprox;
    float erro = 0.001;
    float aurea = (1 + sqrt(5)) / 2;
    float calc;
    do {
        prox = p + s;
        p = s;
        s = prox;
        aureaAprox = (float) prox / p;
        calc = (aureaAprox - aurea);
        if (calc < 0)
            calc = calc * (-1);
    } while (erro <= calc);

    printf("Aurea: %f Aurea Aproximada: %f Erro: %f", aurea, aureaAprox, calc);
    return (EXIT_SUCCESS);
}








