#include <stdio.h>
#include "Zadania.h"

void runMain() {


	int zadanie;
	do {
		printf("\n========= Zadania Lab 5 ============\n");
		printf("1. Zadanie 1\n");
		printf("2. Zadanie 2\n");
		printf("3. Zadanie 3\n");
		printf("4. Zadanie 4\n");
		printf("5. Zadanie 5\n");
		printf("6. Zadanie 6\n");
		printf("8. Zadanie 8\n");
		printf("0. Wyjscie\n");
		printf("Wybierz zadanie: ");
		scanf("%d", &zadanie);

		switch (zadanie) {

		case 1:
			runZadanie1();
			break;
		case 2:
			runZadanie2();
			break;
		case 3:
			runZadanie3();
			break;
		case 4:
			runZadanie4();
			break;
		case 5:
			runZadanie5();
			break;
		case 6:
			runZadanie6();
			break;
		case 8:
			runZadanie8();
			break;
		case 0:
			break;
		default:
			printf("Podano bledne zadanie\n");
			break;
		}
	} while (zadanie != 0);
}

void runZadanie1()
{
	printf("\n");
	int n;
	printf("Podaj liczbe n: ");
	scanf("%d", &n);
	
	if (n < 0) {
		printf("Liczba musi byc wieksza od zera");
	}
	else {
		int silnia = obliczanieSilni(n);
		printf("Silnia z liczby %d = %d", n, silnia);
	}

}

void runZadanie2()
{
	printf("\n");
	int n;
	printf("Podaj liczbe n: ");
	scanf("%d", &n);
	if (n < 1) {
		printf("Liczba musi byc dodatnia");
	}
	else {
		int wynik = wyznaczCiag(n);
		printf("Dla liczby %d ciag jest rowny: %d", n, wynik);
	}
}

void runZadanie3()
{
	printf("\n");
	int a, b;
	printf("Podaj liczbe a: ");
	scanf("%d",&a);
	printf("Podaj liczbe b: ");
	scanf("%d", &b);
	int wynikNWD = obliczanieNWD(a, b);
	printf("Najwiekszym dzielnikiem z %d i %d jest: %d", a, b, wynikNWD);
}

void runZadanie4()
{
	printf("\n");
	int i;
	printf("i | wynik(i)\n");
	for (int i = 2; i <= 8; i++) {
		printf("%d | %d\n", i, wynik4(i));
	}
	
}

void runZadanie5()
{
	// wszedzie zamienic %d na %lld jezeli script ma byc glupoto odporny
	printf("\n");
	int n;
	printf("Podaj liczbe n do zamienienia: ");
	scanf("%d", &n);
	if (n < 0) {
		printf("Liczba nie moze byc mniejsza od zera");
		return;
	}
	printf("Liczba %d w systemie dwojkowym wynosi: ", n);
	if (n == 0) {
		printf("0");
	}
	else {
		printf("%d", dziesietneNaDwojkowe(n));
	}
}

void runZadanie6()
{
	printf("\n");
	int n;
	printf("Podaj liczbe n: ");
	scanf("%d", &n);
	printf("Wynik wynosi: %d", ciagFibanaccego(n));

}

void runZadanie8()
{
	printf("\n");
	int n, x;
	printf("Podaj liczbe calkowita x: ");
	scanf("%d", &x);
	printf("Podaj liczbe calkowita dodatnia n: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("Liczba ma byc dodatnia");
		return 1;
	}
	else {
		printf("Wynik funkcji (x = %d,n = %d) wynosi: %d", x, n, funkcja8(x, n));
	}
}
