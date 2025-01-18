// do zad1
int obliczanieSilni(int n) {
	if (n <= 1)
		return 1;
	return n * obliczanieSilni(n - 1);
}

// do zad2
int wyznaczCiag(int n) {
	if (n == 1)
		return -1;
	return -wyznaczCiag(n - 1) * n - 2;
}

//do zad3

//Najwiekszy wspolny dzielnik
int obliczanieNWD(int a, int b) {
	if (b == 0)
		return a;
	return obliczanieNWD(b, a % b);
}

//do zad4
int wynik4(int i) {
	if (i < 3)
		return 1;
	if (i % 2 == 0)
		return wynik4(i - 3) + wynik4(i - 1) + 1;
	return wynik4(i - 1) % 7;
}

//do zad5
int dziesietneNaDwojkowe(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 2 + 10 * dziesietneNaDwojkowe(n / 2);
	}
}

int ciagFibanaccego(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (n < 0) {
		printf("Liczba musi byc dodatnia");
	}
	else {
		return (n - 2) + (n - 1);
	}
}