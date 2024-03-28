#include <math.h>   // # USES
#include <stdio.h>  // # USES
#include <stdlib.h> // # USES

// # sposób na łatwą zmianę typu dla wszystkich zmiennych w programie
#define SCALAR double
// define SCALAR float

#define SMALL_NUMBER 1.e-20 // # czy wystarczy jedna wartość dla float i dla double?

//$deklaracja funkcji
int rownanieKwadratowe(SCALAR a, SCALAR b, SCALAR c, SCALAR *x1_ptr, SCALAR *x2_ptr);

// # Testowanie: konstrukcji sterujących (a także nazw zmiennych,
// # zakresów widoczności i czasu życia)
int main(void) {
    // # rozwiązanie równania kwadratowego ax^2 + bx + c = 0
    printf("\nProgram rozwiązywania równania kwadratowego ax^2 + bx + c = 0\n");
    // # typ a, b, c ustalany poprzez symbol SCALAR
    SCALAR a, b, c;
    // # rozważania o kontrakcie... (czy uwzględnia skończoną precyzję?)
    // # input - uodpornianie na błędy wczytywania danych
    printf("\nPodaj parametr a: ");
    scanf("%lf", &a); // # adres! (miejsce na wpisanie wartości)
    printf("Podaj parametr b: ");
    scanf("%lf", &b); // # uwaga: inny format dla float!
    printf("Podaj parametr c: ");
    scanf("%lf", &c);


    SCALAR x1 = 0, x2 = 0;

    int info = rownanieKwadratowe(a, b, c, &x1, &x2);

    if (info == -1) {
        printf("Błędne dane: a i b równe 0 (zbyt bliskie 0). Przerwanie programu.\n");
        exit(-1);
    } else if (info == -2) {
        printf("Błędne dane: a jest równe 0\n");
        exit(-1);
    } else if (info == -3) {
        printf("Dwa pierwiastki zespolone - nie umiem obliczyć\n");
        exit(-1);
    }

    if (x2) {
        printf("Dwa pierwiastki rzeczywiste: x1 = %.12le, x2 = %.12le\n", x1, x2);
    } else {
        printf("Jeden pierwiastek rzeczywisty: x = %.12le\n", x1);
    }

    return (0);
}

int rownanieKwadratowe(SCALAR a, SCALAR b, SCALAR c, SCALAR *x1_ptr, SCALAR *x2_ptr) { 
    // # if(a==0 && b==0){ // # alternatywa: if( a==0 || b==0 ) - zależnie od kontraktu
    if (fabs(a) < SMALL_NUMBER && fabs(b) < SMALL_NUMBER) { // # poprawnie
        return -1;
    } else {
        if (a == 0) { // # równanie liniowe
            // # co mówi kontrakt? - czy należy rozważyć liczby a bliskie 0 ?
            return -2;
        } else {
            SCALAR delta;              // # zakres widoczności nazwy - powiązanie z czasem życia
            delta = b * b - 4 * a * c; // # problem jeśli delta bliskie b*b (w skończonej precyzji)
                                       // # wtedy odejmowanie b i sqrt(delta) traci cyfry znaczące
            if (delta < 0) {
                return -3;
            } else if (delta == 0) {
                *x1_ptr = -b / (2 * a);
            } else {
                SCALAR temp = sqrt(delta);
                *x1_ptr = (-b - temp) / (2 * a);
                *x2_ptr = (-b + temp) / (2 * a);
            }
        } // # znaczenie wcięć i nawiasów klamrowych dla zwiekszenia czytelności kodu !
    }
    return 0;
}

