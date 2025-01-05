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
        printf("========= Lab 3 ============\n");
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
    printf("%d\n", tab[0]);
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            tab[i] = tab[i - 1] + 3;
            printf("%d\n", tab[i]);
        }
    }
}

//zadanie 3 
void runZadanie3() {
    printf("\n");
    const int n = 10;
    int tab[n];//DLACZEGO n NIE JEST STALA JAK JEST UZYWANE CONST
    int a;

    printf("Podaj liczbe a:");
    scanf("%d",&a);

    for (int i = n - 1; i >= 0; i--) {
        tab[i] = a - 5 * (n - 1);
    }
    printf("Tablica po wypelnieniu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
}

//zadanie 4
void runZadanie4() {
    printf("\n");
    int n;
    printf("Podaj rozmiar tablicy:");
    scanf("%d", &n);

    srand(time(NULL));
    int tab [n];
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 74 - 23; //liczby z przedzialu -23, 50
    }
    int min = tab[i];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    printf("Tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    printf("Minimalna wartosc w tablicy: %d\n", min);
}

// zadanie 5
void runZadanie5() {
    printf("\n");
}

//zadanie 6
void runZadanie6() {
    printf("Zadanie 6");
}

//zadanie 7
void runZadanie7() {
    printf("Zadanie 7");
}

//zadanie 8
void runZadanie8() {
    printf("Zadanie 8");
}
