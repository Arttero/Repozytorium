//1.
//a)
/*
int main() {

	int a = 5;
	int* wsk;
	wsk = &a;
	printf("wartosc a = %p\n", &a);

	return 0;
}
*/
//b)
/*
int main() {

	int a;
	printf("podaj a:"), scanf_s("%d", &a);
	int* wsk;
	wsk = &a;
	printf("wartosc a = %d\n", a);
	printf("wartosc a = %p\n", &a);

	return 0;
}
*/
//c)
/*
void dodaj(int* a, int* b, int* wynik) {
	*wynik = *a - *b;
}

int main() {

	int a,b,suma;
	printf("podaj a: "), scanf_s("%d", &a);
	printf("podaj b: "), scanf_s("%d", &b);
	dodaj(&a, &b, &suma);
	printf("suma: %d", suma);
	return 0;
}
*/
//d)
/*
void srednia(int* a, int* b, int* c, int* wynik){
	*wynik = (*a + *b + *c) / 3;
}
int main() {
	int a, b, c, suma;
	printf("podaj a: "), scanf_s("%d", &a);
	printf("podaj b: "), scanf_s("%d", &b);
	printf("podaj c: "), scanf_s("%d", &c);
	srednia(&a, &b, &c, &suma);
	printf("srednia: %d", suma);
	return 0;
}
*/

//2.
//a)

/*
int main() {

	int tab[] = { 1,2,3,4,5 };
	int* ptr = tab;
	printf("Tab[%d] = %p\n", *tab, ptr);

	return 0;
}
*/
//b)
/*
int main() {

	int tab[] = { 1,2,3,4,5 };
	int* ptr = tab;
	printf("Tab[%d] = %p\n", *tab+3, ptr+3);

	return 0;
}
*/
//c)
