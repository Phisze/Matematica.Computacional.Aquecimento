/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Média e Variância Amostral
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 15 de Março de 2019, 20:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    float num;
    float *nums;
    float media = 0;
    float variancia = 0;
    int i;

    printf("Digite o numero de teros do array: ");
    scanf("%d%*c", &n);

    nums = malloc(n * sizeof (float));

    for (i = 0; i < n; i++) {
        printf("Digite o numero da media: ");
        scanf("%f%*c", &num);
        media = media + num;
        nums[i] = num;
    }
    media = media / n;
    
    for (i = 0; i < n; i++) {
        variancia = variancia + pow((nums[i] - media), 2);
    }
    variancia = variancia / (n - 1);
    
    printf("Media: %f Variancia: %f", media, variancia);
    free(nums);
    return (EXIT_SUCCESS);
}

