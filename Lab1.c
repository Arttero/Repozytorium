#include <stdio.h>

//zad 1

/*
int main() {
	printf("nk134920");

	return 0;
}
*/

//zad 2

/*
int main() {
	int A;
	printf("Podaj Liczbe : ");
	scanf("%d", &A);
	if (A % 2 == 0) {
		printf("liczba %d jest parzysta\n", A);
	}
	else {
		printf("Liczba %d jest nieparzysta\n", A);
	}

	return 0;
}
*/

//zad 3

/*
int main() {
	double A,B;

	printf("podaj liczbe A: ");
	scanf("%lf", &A);
	printf("podaj liczbe B: ");
	scanf("%lf", &B);

	if (A > B) {
		printf("Liczba A jest wieksza od liczby B");
	}
	else {
		printf("Liczba B jest wieksza od liczby A");
	}
	return 0;
}
*/

//zad 4

/*
int main() {
	double A,B,C,D,SredniaArytmetyczna;

	printf("podaj liczbe A: ");
	scanf("%lf", &A);
	printf("podaj liczbe B: ");
	scanf("%lf", &B);
	printf("podaj liczbe C: ");
	scanf("%lf", &C);
	printf("podaj liczbe D: ");
	scanf("%lf", &D);

	SredniaArytmetyczna = (A + B + C + D) / 4;
	printf("Srednia arytmetyczna z wprowadzonych liczb wynosi: %lf", SredniaArytmetyczna);

	return 0;
}
*/

//zad 5

/*
int main() {
	double A, B, wynik;
	char Znak;

	printf("Podaj pierwsza liczbe: \n");
	scanf("%lf", &A);
	printf("Podaj znak ktorego chcesz uzyc (+, -, /, *)\n");
	scanf(" %c", &Znak);
	printf("Podaj druga liczbe: \n");
	scanf("%lf", &B);

	switch (Znak) {
	case '+':
		wynik = A + B;
		printf("Wynik: %lf", wynik);
		break;
	case '-':
		wynik = A - B;
		printf("Wynik: %lf", wynik);
		break;
	case '/':
		if (B != 0) {
			wynik = A / B;
			printf("Wynik: %lf", wynik);
		}
		else {
			printf("Nie mozna dzielic przez zero!");
		}
		break;
	case '*':
		wynik = A * B;
		printf("Wynik: %lf", wynik);
		break;
	default:
		printf("Bledny znak");
		break;
	}
	return 0;
}
*/
