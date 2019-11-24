/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Cálculo da Mediana e Moda
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 15 de Março de 2019, 17:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    int *nums;
    float mediana = 0;
    float moda = 0, conta = 0;
    int i, j;
    float q;
    int w;
    int *cont, contG = 0;

    printf("Digite o numero de termos do array: ");
    scanf("%d%*c", &n);

    q = n / 2;

    nums = malloc(n * sizeof (int));
    cont = malloc(n * sizeof (int));

    for (i = 0; i < n; i++) {
        printf("Digite o numero da media: ");
        scanf("%d%*c", &nums[i]);
    }

    //Mediana
    w = (int) q;
    if (n % 2 == 0) {
        mediana = (nums[w - 1] + nums[w]) / 2;
    } else {
        mediana = nums[w];
    }

    //Moda
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {

            if (nums[i] == nums[j]) {
                cont[i]++;
                if (cont[i] > conta) {
                    conta = cont[i];
                    moda = nums[i];
                }
            }

        }
        cont[i] = 0;
    }
    if (conta == 0) {
        printf("Mediana: %.2f ", mediana);
        printf("Nao existe moda\n");
    } else {
        printf("Mediana: %.2f Moda: %.2f", mediana, moda);
    }



    return (EXIT_SUCCESS);
}

