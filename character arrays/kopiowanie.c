#include <stdio.h>

#define MAX_DLUGOSC_NAPISU 50

int main(void) // ɀ program kopiowania z stdin na stdout
{
  int c;
  // c = getchar();
  // while (c != EOF)
  // {
  //   putchar(c);
  //   c = getchar();
  // }

  // ɀ 1. zamiana programu jak wyżej na program wykorzystujący formę skrótową
  // ɀ (po sprawdzeniu działania programu oryginalnego, należy go wykomentować w całości,
  // ɀ a następnie napisać (odkomentować) wersję skróconą (poniżej)
  // ɀ - po sprawdzeniu poprawności działania wprowadzenie kończenia wczytywania
  // ɀ   po wpisaniu znaku końca linii
  
  /*  while ((c = getchar()) != EOF)
    {
      if (c == '\n') 
       break;       
      
	putchar(c);
    }*/



 // ɀ 2. Dodanie wczytywania do tablicy znaków

  char napis[MAX_DLUGOSC_NAPISU];
 int zakres = MAX_DLUGOSC_NAPISU - 1, i, dlugosc_napisu;
  
 //wpisanie znaków do tablicy
  for (i = 0; i < zakres && (c = getchar()) != EOF && c != '\n'; i++) 
  {  
      napis[i] = c;
  }

  if (c == '\n') {
      napis[i] = '\0'; //znak końca linii
      dlugosc_napisu = i;
  }

  //wypisanie znaków jako liczb calkowitych
  for (i = 0; i < dlugosc_napisu; i++)
  {
    printf("Znak %c jako liczba calkowita: %i\n", napis[i], (int)napis[i]);
  }

  // ɀ Program switch.c - w innym pliku

  //-------------------------------- 3.0 ------------------------------------

  // ɀ 5. Wpisanie kodu (na podstawie wykładu) zliczającego liczbę znaków w tablicy
  // ɀ    - ewentualna zamiana pętli for na while

  // ɀ 6. Wpisanie kodu (na podstawie wykładu) przepisującego zawartość jednej tablicy
  // ɀ    znaków do drugiej (ewentualna zamiana pętli while na do)

  // ɀ 7. Wpisanie kodu (na podstawie wykładu) porównującego zawartość dwóch tablic
  // ɀ    - ewentualna zamiana pętli do na while lub for

  //-------------------------------- 4.0 ------------------------------------

  // ɀ 8. Napisanie kodu tworzenia tablicy o okreslonej długości i wypełniania
  // ɀ     losowymi znakami ( z tablicy ASCII - od 0 do 127, lub dla wybranego
  // ɀ     podzbioru znaków, np. małych liter lub t.p.)

  // ɀ 9. Napisanie kodu tworzenia histogramu dla otrzymanej tablicy
  // ɀ    ( for(....) histogram[ tablica[i] - pierwszy_znak ] ++; )

  // ɀ 10. graficzna prezentacja histogramu

  //-------------------------------- 5.0 ------------------------------------
}
