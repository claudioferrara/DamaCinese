/*
 * menu.c
 *
 *  Created on: 29 giu 2017
 *      Author: Shan
 */

#include  <stdio.h>
#include <stdlib.h>


void menu() {

	int comando;
    int esecuzione;

    comando = 0;
    esecuzione = 1;


	while (esecuzione)
	{
		printf("1 - Nuova partita\n");
		printf("2 - Carica partita\n");
		printf("3 - Impostazioni\n");
		printf("4 - Regolamento\n");
		printf("5 - Esci\n");

		printf("\nInserire comando da 1 a 5: ");
		scanf("%d", &comando);

		if (comando == 1) { /* nuovapartita(); */ }
		if (comando == 2) { /* caricapartita(); */ }
		if (comando == 3) { /* impostazioni(); */}
		if (comando == 4) { regolamento(); }
		if (comando == 5) { esecuzione = 0; }
	}


}
