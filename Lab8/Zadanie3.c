#include "Zadania.h"
#include <stdio.h>
#include <stdlib.h>


void runZadanie3()
{
	printf("\n");
	int inChar, liczbaZnakow = 0;
	char nazwaPlikuIN[15], nazwaPlikuOUT[15];
	FILE* inputFile, * outputFile;

	printf("Podaj nazwe pliku ktorego chcesz obejrzec:\n");
	scanf("%s", &nazwaPlikuIN);// przykladowo test.txt

	printf("Podaj nazwe pliku do ktorego chcesz zapisac %s:\n", nazwaPlikuIN);
	scanf("%s", &nazwaPlikuOUT);//przykladowo test2.txt

	if ((inputFile = fopen(nazwaPlikuIN, "r")) == NULL)
	{
		printf("Plik %s nie istnieje", nazwaPlikuIN);
		exit(1);
	}

	if ((outputFile = fopen(nazwaPlikuOUT, "w")) == NULL)
	{
		printf("Blad w otwarciu pliku %s", nazwaPlikuOUT);
		exit(1);
	}

	while ((inChar = getc(inputFile)) != EOF)
	{
		putc(inChar, outputFile);
		liczbaZnakow++;
	}

	fprintf(outputFile, "\n\nLiczba znakow: %d\n", liczbaZnakow);
	printf("Plik zostal skopiowany\n");
	fclose(inputFile);
}
