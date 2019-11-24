/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Norma de Vetor
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 14 de Março de 2019, 15:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float x;
    float y;
    float z;
    float v;

    printf("Digite o valor de x: ");
    scanf("%f%*c", &x);
    printf("Digite o valor de y: ");
    scanf("%f%*c", &y);
    printf("Digite o valor de z: ");
    scanf("%f%*c", &z);

    v = sqrt((x * x)+(y * y)+(z * z));
    printf("Norma: %f", v);


    return (EXIT_SUCCESS);
}

