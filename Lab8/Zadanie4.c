#include "Zadania.h"
#include <stdio.h>

#define INPUT_FILE "dane.txt"
#define OUTPUT_FILE "wyniki6.txt"
#define DLUGOSC_PESELU 11

void runZadanie4()
{
	printf("\n");
	char PESEL[DLUGOSC_PESELU + 2];// nie jestem pewien czy powinienem dawac +1 czy +2

	FILE* inputFile, * outputFile;
	if ((inputFile = fopen(INPUT_FILE, "r")) == NULL)
	{
		printf("Nie mozna odczytac pliku");
		exit(1);
	}
	if ((outputFile = fopen(OUTPUT_FILE, "w")) == NULL)
	{
		printf("Nie mozna zapisac pliku");
		exit(1);
	}

	int kobieta = 0, mezczyzna = 0;
	int listopad = 0;

	while (fgets(PESEL, sizeof(PESEL), inputFile) != NULL) {

		if (PESEL[strlen(PESEL) - 1] == '\n')
		{
			PESEL[strlen(PESEL) - 1] == '\0';
		}

		//4.1
		int plecPESEL = PESEL[9];
		if (plecPESEL % 2 == 0)
		{
			kobieta++;
		}
		else
		{
			mezczyzna++;
		}

		//4.2

		int miesiac = (PESEL[2] - '0') * 10 + (PESEL[3] - '0');
		if (miesiac == 11 || miesiac == 31) {
			listopad++;
		}

		//4.3
		int algorytm[] = {1,3,7,9,1,3,7,9,1,3};
		int poprawnoscPESEL = 0;
		for (int i = 0; i < 10; i++) {
			poprawnoscPESEL += algorytm[i] * PESEL[i];
		}

		poprawnoscPESEL += PESEL[10];
		if (poprawnoscPESEL % 10 != 0)
		{
			fprintf(outputFile, "Bledny format PESEL: %s\n", PESEL);
		}

	}
	fprintf(outputFile, "\n4.1\nLiczba kobiet: %d\nLiczba mezczyzn: %d\n", kobieta, mezczyzna);
	fprintf(outputFile, "\n4.2\nLiczba osob urodzonych w listopadzie: %d\n", listopad);

	printf("Zadania zostaly zapisane w pliku %s", OUTPUT_FILE);
	fclose(inputFile);
}