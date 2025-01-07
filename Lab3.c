#include <stdio.h>
#include <time.h>

void runMain();
void runZadanie1();
void runZadanie2();
void runZadanie3();
void runZadanie4();
void runZadanie5();
void runZadanie6();
void runZadanie7();
void runZadanie8();



int main() {
    runMain();
    return 0;
}
void runMain() {
    int zadanie;
    do {
        printf("\n========= Lab 3 ============\n");
        printf("1. Zadanie 1\n");
        printf("2. Zadanie 2\n");
        printf("3. Zadanie 3\n");
        printf("4. Zadanie 4\n");
        printf("5. Zadanie 5\n");
        printf("6. Zadanie 6\n");
        printf("7. Zadanie 7\n");
        printf("8. Zadanie 8\n");
        printf("0. Wyjscie\n");
        printf("Wybierz zadanie: \n");
        scanf("%d", &zadanie);


        switch (zadanie)
        {
        case 1: runZadanie1(); break;
        case 2: runZadanie2(); break;
        case 3: runZadanie3(); break;
        case 4: runZadanie4(); break;
        case 5: runZadanie5(); break;
        case 6: runZadanie6(); break;
        case 7: runZadanie7(); break;
        case 8: runZadanie8(); break;
        case 0: break;

        default:
            printf("Bledne dane ....  \n");
            break;
        }
    } while (zadanie != 0);
}

//zadanie 1
void runZadanie1() {
    printf("\n");
    int tab[10];
    tab[0] = 3;
    printf("%d\n", tab[0]);
    for (int i = 1; i < 10; i++) {
        tab[i] = tab[i - 1] + 3;
        printf("%d\n", tab[i]);
    }
}

//zadanie 2
void runZadanie2() {
    printf("\n");
    int tab[10];
    tab[0] = 3;
    for (int i = 1; i < 10; i++) {
        tab[i] = tab[i - 1] + 3;
        if (tab[i] % 2 == 0) {
            printf("%d\n", tab[i]);
        }
    }
}

//zadanie 3 
void runZadanie3() {
    printf("\n");
    // chyba by sie to dalo zrobic dynamiczna alokacja pamieci
    int n = 10;
    int tab[10];
    int a;

    printf("Podaj liczbe a:");
    scanf("%d", &a);

    for (int i = n - 1; i >= 0; i--) {
        tab[i] = a - 5 * (n - 1 - i);
    }
    printf("Tablica po wypelnieniu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
}

//zadanie 4
void runZadanie4() {
    printf("\n");
    int n = 4;// podalem stala liczbe poniewaz inaczej liczba nie byla "stala"
    //printf("Podaj wielkosc tabeli:\n");
    //scanf("%d", &n);
    srand(time(NULL));
    int tab[4];

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 74 - 23;
    }

    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    printf("Tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\nMinimalna wartosc tablicy: %d", min);
}

// zadanie 5
void runZadanie5() {
    printf("\n");

    int tab[5];
    int pierwszaWartoscTab, drugaWartoscTab;

    printf("Podaj pierwsza wartosc tablicy:\n");
    scanf("%d", &pierwszaWartoscTab);
    printf("Podaj druga wartosc tablicy:\n");
    scanf("%d", &drugaWartoscTab);

    tab[0] = pierwszaWartoscTab;
    tab[1] = drugaWartoscTab;
    for (int i = 2; i < 5; i++) {
        tab[i] = tab[i - 1] + tab[i - 2];
    }
    
    printf("Tablica po obliczeniach: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", tab[i]);
    }
}

//zadanie 6
void runZadanie6() {
    printf("\n");
    int tab[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0; i < 10; i++) {
        tab[10 + i] = tab[i];
    }
    printf("Zawartosc tablicy:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", tab[i]);
    }
}

//zadanie 7
void runZadanie7() {
    printf("\n");
    int n = 3;
    int macierz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += macierz[i][i];
    }
    printf("Suma elementow przekatnej glownej: %d", suma);
}

//zadanie 8
void runZadanie8() {
    printf("\n");
    int n = 3;
    int macierz1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int macierz2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int macierzWynik[3][3];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            macierzWynik[i][j] = macierz1[i][j] + macierz2[i][j];
        }
    }
    printf("Wynik: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", macierzWynik[i][j]);
        }
    }
}
