/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Rotação 3D
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 * 
 * Created on 15 de Março de 2019, 21:57
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float o;
    float x, y, z;
    float xR = 0, yR = 0, zR = 0;
    int op;

    printf("Digite o angulo de rotação: ");
    scanf("%f%*c", &o);

    o = o * 3.1415 / 180;

    float matrizR[4][4] = {
        {cos(o), -sin(o), 0, 0},
        {sin(o), cos(o), 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    do {
        printf("Digite a posição X: ");
        scanf("%f%*c", &x);

        printf("Digite a posição Y: ");
        scanf("%f%*c", &y);

        printf("Digite a posição Z: ");
        scanf("%f%*c", &z);

        //    x = 2;
        //    y = 4;
        //    z = 3;

        float pontos[4][1] = {
            {x},
            {y},
            {z},
            {1}
        };
        float pontosR[4][1] = {
            {xR},
            {yR},
            {zR},
            {1}
        };
        float q;
        for (int i = 0; i < 4; i++) {
            //    for (int j = 0; j < 1; j++) {
            q = 0;
            for (int k = 0; k < 4; k++) {

                q += matrizR[i][k] * pontos[k][0];
                pontosR[i][0] = q;
            }
            //  }
        }

        printf("%f R %f\n%f R %f\n%f R %f", pontos[0][0], pontosR[0][0], pontos[0][1], pontosR[0][1], pontos[0][2], pontosR[0][2]);

        printf("Digite se deseja digita novo um ponto\n1 - SIM\n2 - NÃO\n");
        scanf("%f%*c", &op);
        
    } while (op == 2);
    return (EXIT_SUCCESS);
}

