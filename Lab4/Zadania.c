#include "Zadania.h"
#include <string.h>
#include <stdio.h>

void runMain() {
    int zadanie;
    do {
        printf("\n========= Zadania Lab 4 ============\n");
        printf("1. Zadanie 1\n");
        printf("2. Zadanie 2\n");
        printf("3. Zadanie 3\n");
        printf("4. Zadanie 4\n");
        printf("5. Zadanie 5\n");
        printf("6. Zadanie 6\n");
        printf("0. Wyjscie\n");
        printf("Wybierz zadanie: ");
        scanf("%d", &zadanie);

        switch (zadanie)
        {
        case 1: runZadanie1(); break;
        case 2: runZadanie2(); break;
        case 3: runZadanie3(); break;
        case 4: runZadanie4(); break;
        case 5: runZadanie5(); break;
        case 6: runZadanie6(); break;
        case 0: break;
        default:
            printf("Podano bledne dane\n");
            break;
        }
    } while (zadanie != 0);
}


void runZadanie1()
{
    printf("\n");

    //inicjalizacja ciagu tekstowego
    char inicjlizacja[] = "Jakis ciag znakow";
    printf("%s\n\n",inicjlizacja);
    
    //przechowywanie danych
    char przechowywanieDanych[100];
    printf("Podaj tekst:\n");
    scanf("%s", przechowywanieDanych);
    printf("\nPodany tekst: %s\n", przechowywanieDanych);//z jakiegos powodu znika 1 wyraz
    
    //kopiowanie ciagu tekstowego
    char kopiowanyCiag1[] = "Przykladowy ciag tekstowy do skopiowania\0";
    char kopiowanyCiag2[50];
    strcpy(kopiowanyCiag2, kopiowanyCiag1);
    printf("\nPierwszy ciag: %s\nDrugi ciag: %s\n", kopiowanyCiag1, kopiowanyCiag2);

    //laczenie ciagu tekstowego
    char laczonyCiag1[100] = "Programowanie";
    char laczonyCiag2[] = " w jezyku C\0";
    strcat(laczonyCiag1, laczonyCiag2);
    printf("\nWynik polaczenia dwoch ciagow: %s\n", laczonyCiag1);
    
    //okreslanie dlugosci ciagu tekstowego
    char ciagTekstowy[] = "Przykladowy ciag potrzebny do zadania\0";
    printf("\nLiczba znakow w zdaniu \"%s\" wynosi: %d\n", ciagTekstowy, strlen(ciagTekstowy));
}

void runZadanie2()
{
    printf("\n");

    printf("Znaki ASCII od 'a' do 'z':\n");
    for (char znak = 'a'; znak <= 'z'; znak++) {
        printf("%c - %d, ", znak, znak);
    }
    printf("\n\nZnaki ASCII od 'A' do 'Z':\n");
    for (char znak = 'A'; znak <= 'Z'; znak++) {
        printf("%c - %d, ", znak, znak);
    }
    printf("\n\nZnaki ASCII od '0' do '9':\n");
    for (char znak = '0'; znak <= '9'; znak++) {
        printf("%c - %d, ", znak, znak);
    }
}

void runZadanie3()
{
    printf("\n");
    //bez polskich znakow pokroju ¹,ê

    //char zdanie3[100];
    int samogloski = 0, spolgloski = 0;

    printf("Podaj zdanie:\n");
    //scanf("%s", &zdanie3);// nie wiem co tu dac innego ( za kazdym razem omija)
    char zdanie3[] = "Przykladowe zdanie\0";

    for (int i = 0; zdanie3[i] != '\0'; i++) {
        char znaki = zdanie3[i];

        if (znaki >= 'A' && znaki <= 'Z') {
            znaki = znaki + ('a' - 'A');
        }

        if (znaki >= 'a' && znaki <= 'z') {
            if (znaki == 'a' || znaki == 'e' || znaki == 'i' || znaki == 'o' || znaki == 'u') {
                samogloski++;
            }
            else
            {
                spolgloski++;
            }
        }
    }
    printf("Zdanie \"%s\" ma: %d samoglosek i %d spolglosek", zdanie3, samogloski, spolgloski);
}

void runZadanie4()
{
    printf("\n");
    char zdanie4[] = "Jakies przykladowe zdanie";
    //scanf / gets / fgets

    printf("%s", _strupr(zdanie4));
}

void runZadanie5()
{
    printf("\n");
    printf("Podaj dodatnia liczbe: ");
    char liczba5[100];
    scanf("%s", liczba5);

    for (int i = 0; liczba5[i] != '\0'; i++) {
        if (liczba5[i] >= '0' && liczba5[i] <= '9') {
            switch (liczba5[i]) {
            case '0':
                printf("zero ");
                break;
            case '1':
                printf("jeden ");
                break;
            case '2':
                printf("dwa ");
                break;
            case '3':
                printf("trzy ");
                break;
            case '4':
                printf("cztery ");
                break;
            case '5':
                printf("piec ");
                break;
            case '6':
                printf("szesc ");
                break;
            case '7':
                printf("siedem ");
                break;
            case '8':
                printf("osiem ");
                break;
            case '9':
                printf("dziewiec ");
                break;
            }
        }
        else {
            printf("Podano bledna liczbe");
            return;
        }
    }
}

void runZadanie6()
{
    printf("\n");
    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "zyxwvutsrqponmlkjihgfedcba";
    //char napis[100];
    char napisOdwrotny[100];

    printf("Napisz zdanie ktore chcesz \"zakodowac\":\n");
    //gets
    char napis[] = "jakies zdanie do zakodowania";

    for (int i = 0; napis[i] != '\0'; i++) {
        char znak = napis[i];
        char* pozycja = strchr(s1, znak);

        if (pozycja != NULL) {
            int miejsce = pozycja - s1;
            napisOdwrotny[i] = s2[miejsce];
        }
        else {
            napisOdwrotny[i] = znak;
        }
    }
    napisOdwrotny[strlen(napis)] = '\0';
    printf("Zakodowany ciag: %s\n", napisOdwrotny);
}