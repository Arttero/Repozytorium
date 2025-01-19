#include "Zadania.h"
#include <stdio.h>

#define INPUT_FILE "dane2.txt"
#define OUTPUT_FILE "wynik2.txt"

int sprawdzenieLiczby(int liczba) {
	int cyfraJednosci = liczba % 10;
	return (cyfraJednosci == 0 || cyfraJednosci == 3 || cyfraJednosci == 8 || cyfraJednosci == 9);
}

void runZadanie2()
{
	printf("\n");
	FILE* inputFile, * outputFile;
	int liczba;
	
	inputFile = fopen(INPUT_FILE, "r");
	if (inputFile == NULL) {
		printf("Nie mozna otworzyc pliku %s\n", INPUT_FILE);
		return;
	}

	outputFile = fopen(OUTPUT_FILE, "w");
	if (outputFile == NULL) {
		printf("Nie mozna zapisac pliku %s\n", OUTPUT_FILE);
		fclose(inputFile);
		return;
	}

	while (fscanf(inputFile, "%d", &liczba) == 1) {
		if (sprawdzenieLiczby(liczba)) {
			fprintf(outputFile, "%d\n", liczba);
		}
	}
	fclose(inputFile);
	fclose(outputFile);

	printf("Wyniki zapisano w pliku %s", OUTPUT_FILE);
}