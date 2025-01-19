#include "Zadania.h"
#include <stdio.h>

#define INPUT_FILE "promienie.txt"
#define OUTPUT_FILE "wynik.txt"

double obliczPole(double promien) {
	return 3.14 * promien * promien;
}

void runZadanie1()
{
	printf("\n");
	FILE* inputFile, * outputFile;
	double radii[2], areas[2];

	inputFile = fopen(INPUT_FILE, "r");
	if (inputFile == NULL) {
		printf("Nie moge otworzyc pliku %s.\n", INPUT_FILE);
		return;
	}
	for (int i = 0; i < 2; i++) {
		if (fscanf(inputFile, "%lf", &radii[i]) != 1) {
			printf("Blad odczytu danych z pliku %s\n", INPUT_FILE);
			fclose(inputFile);
			return;
		}
	}
	fclose(inputFile);

	for (int i = 0; i < 2; i++) {
		areas[i] = obliczPole(radii[i]);
	}

	if (areas[0] > areas[1]) {
		double temp = areas[0];
		areas[0] = areas[1];
		areas[1] = temp;
	}
	outputFile = fopen(OUTPUT_FILE, "w");
	if (outputFile == NULL) {
		printf("Nie mozna otworzyc pliku %s do zapisywania wynikow\n", OUTPUT_FILE);
		return;
	}
	for (int i = 0; i < 2; i++) {
		fprintf(outputFile, "%.2lf\n", areas[i]);
	}
	fclose(outputFile);
	printf("Wyniki zapisano w pliku %s.\n", OUTPUT_FILE);
}