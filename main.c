/*
 * main.c
 * Resposta do exercício 2 do capítulo 5.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

	Fila *f = iniciar();
	Fila *f_par = iniciar();
	Fila *f_impar = iniciar();

	int i;
	for (i = 1; i <=15; i++) {
		enqueue(f, i);
	}

	exibir(f);

	int j;
	int tamanho_fila = size(f);
	for(j = 1; j <= tamanho_fila; j++) {

		int numero = dequeue(f);

		if (numero % 2 == 0) {
			enqueue(f_par, numero);
		} else {
			enqueue(f_impar, numero);
		}
	}

	exibir(f_par);
	exibir(f_impar);

	return 0;
}

