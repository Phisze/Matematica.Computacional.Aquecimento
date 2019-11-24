/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * Exercicio: Sequência de Fibonacci
 * Nome: Weverton Rodrigues Arantes
 * Matricula: 0015133
 * Curso: Ciência da Computação
 *
 * Created on 14 de Março de 2019, 18:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
  int n, p = 0, s = 1, prox;
 
  printf("Numero de Termos: ");
  scanf("%d", &n);
 
 
  for (int i = 0; i < n; i++)
  {
    if (i <= 1)
      prox = i;
    else
    {
      prox = p + s;
      p = s;
      s = prox;
    }
    printf("%d ", prox);
  }
    return (EXIT_SUCCESS);
}

