//zad 1

/*
#include <stdio.h>
int main() {
    double liczba, suma = 0;
    int licznik = 0;
    double maksymalna;

    printf("Podaj liczby (wprowadzenie liczby mniejszej od 0 zakonczy proces): \n");

    while (1) {
        printf("Podaj liczbe: ");
        scanf("%lf", &liczba);

        if (liczba < 0) {
            break;
        }
        suma += liczba;
        licznik++;

        if (licznik == 1 || liczba > maksymalna) {
            maksymalna = liczba;
        }
    }

    if (licznik > 0) {
        double srednia = suma / licznik;
        printf("Suma: %lf\n", suma);
        printf("Srednia: %lf\n", srednia);
        printf("Maksymalna wartosc : %lf", maksymalna);
    }
    else {
        printf("Nie wprowadzono zadnych liczb\n");
    }
    return 0;
}
*/

//zad 2

/*
#include <stdio.h>
int main() {
    double liczba;
    int liczbaDodatniaIlosc = 0, liczbaUjemnaIlosc = 0;
    double liczbaDodatniaSuma = 0, liczbaUjemnaSuma = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Podaj liczbe %d: ", i);
        scanf("%lf", &liczba);

        if (liczba >= 0) { //nie jestem pewien czy zero ma byc jako liczba dodatnia
            liczbaDodatniaSuma += liczba;
            liczbaDodatniaIlosc++;
        }
        else if (liczba < 0) {
            liczbaUjemnaSuma += liczba;
            liczbaUjemnaIlosc++;
        }
    }

    printf("Suma liczb dodatnich: %lf\n", liczbaDodatniaSuma);
    printf("Ilosc liczb dodatnich: %d\n", liczbaDodatniaIlosc);
    printf("Suma liczb ujemnych: %lf\n", liczbaUjemnaSuma);
    printf("Ilosc liczb ujemnych: %d\n", liczbaUjemnaIlosc);

    return 0;
}
*/

//zad 3

/*
#include <stdio.h>
int main() {
    int n, sumaParzystych = 0;
    printf("Podaj liczbe n (n>0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n nie moze wynosic 0 lub mniej");
            return 1;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumaParzystych += i;
        }
    }
    printf("Suma liczb parzystych: %d\n", sumaParzystych);
    return 0;
}
*/

//zad 4

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h> 

int main() {
    int n, liczba, sumaParzystych = 0;

    printf("Podaj liczbe n (n>0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n nie moze wynosic 0 lub mniej\n");
        return 1;
    }

    srand(time(NULL));

    printf("Wylosowane liczby: \n");
    for (int i = 0; i < n; i++) {
        liczba = rand() % 56 - 10;

        printf("%d\n", liczba);

        if (liczba % 2 == 0) {
            sumaParzystych += liczba;
        }
    }

    printf("Suma liczb parzystych: %d\n", sumaParzystych);
    return 0;
}
*/

//zad 5

/*
#include <stdio.h>
int main() {
    int n, punkty;
    double sredniaPunktow, sumaPunktow = 0;
    printf("Podaj liczbe studentow: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("n nie moze wynosic 0 lub mniej");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        printf("Podaj liczbe punktow studenta %d: ", i);
        scanf("%d", &punkty);
        sumaPunktow += punkty;
    }
    sredniaPunktow = sumaPunktow / n;
    printf("Srednia pukntow w grupie: %lf\n", sredniaPunktow);
    return 0;
}
*/

//zad 6

//a)
/*
#include <stdio.h>
int main() {
    int n = 1;
    while (n <= 100) {
        printf("%d\n", n);
        n++;
    }
    return 0;
}
*/

//b)
/*
#include <stdio.h>
int main() {
    int n = 100;
    while (n >= 0) {
        printf("%d\n", n);
        n = n - 1;
    }
    return 0;
}
*/

//c)
/*
#include <stdio.h>
int main() {
    int n = 7;
    while (n <= 77) {
        printf("%d\n", n);
        n = n + 7;
    }
    return 0;
}
*/

//d)
/*
#include <stdio.h>
int main() {
    int n = 20;
    while (n >= 0) {
        printf("%d\n", n);
        n = n - 2;
    }
    return 0;
}
*/

//zad 7

//1)
/*
#include <stdio.h>
int main() {
    int i, j;
    for (i = 10; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
*/

//2)
/*
#include <stdio.h>
int main() {
    int i, j, k;
    for (i = 0; i < 10; i++) {
        for (k = 0; k < 10 - i - 1; k++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
*/

//3)
/*
#include <stdio.h>
int main() {
    int i, j, k;
    int n = 10;

    for (i = n; i > 0; i--) {
        for (k = 0; k < n - i; k++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
*/

//4)
/*
#include <stdio.h>
int main() {
    int i, j, k;
    for (i = 0; i < 10; i++) {
        for (k = 0; k < 10 - i - 1; k++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
*/