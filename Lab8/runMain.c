#include "Zadania.h"
#include <stdio.h>

void runMain() {
	int zadanie;
	do {
		printf("\n========= Zadania Lab 8 ============\n");
		printf("1. Zadanie 1\n");
		printf("2. Zadanie 2\n");
		printf("3. Zadanie 3\n");
		printf("4. Zadanie 4\n");
		printf("Podaj numer zadania: ");
		scanf("%d", &zadanie);

		switch (zadanie)
		{
		case 1: runZadanie1(); break;
		case 2: runZadanie2(); break;
		case 3: runZadanie3(); break;
		case 4: runZadanie4(); break;
		case 0: break;
		default:
			printf("Blednie zadanie");
			break;
		}
	} while (zadanie != 0);
}