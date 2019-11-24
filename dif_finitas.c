/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Metodo da Diferenças Finitas
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 14 de Março de 2019, 15:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float s;
    int t;
    float v;
    float a;
    double h = 0.0000000001;

    for (t = 0; t <= 60; t++) {
        s = (t * t) + t - 2;
        v = ((((t + h) * (t + h)) + (t + h) - 2) - ((t * t) + t - 2)) / h;
        a = ((2 * (t + h) + 1)-(2 * t + 1))/h;
        printf("\nTempo: %d  Espaço: %.2f  Velocidade: %.2f  Aceleração: %.2f", t, s, v, a);
    }



    return (EXIT_SUCCESS);
}

