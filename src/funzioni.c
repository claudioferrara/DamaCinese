/*
 * funzioni.c
 *
 *  Created on: 29 giu 2017
 *      Author: Shan
 */

#include <stdio.h>
#include <stdlib.h>

void regolamento() {

	system("cls");

	FILE *regolamento;


    regolamento = fopen("regolamento.txt","r");

    if (regolamento == NULL) {
    	printf("Impossibile trovare il file regolamento.txt \n");
    } else {
    while(!feof(regolamento)) {

    	printf("%c", fgetc(regolamento));

    }
    printf("\n");
    system("PAUSE");
    system("cls");
    }

    fclose(regolamento);
}

