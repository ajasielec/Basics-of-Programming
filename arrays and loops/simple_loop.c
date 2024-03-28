#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROZMIAR_TABLICY 10


void main(void)
{
   // int tablica_int[ROZMIAR_TABLICY];
  int x=0;


  // 1. inicjowanie tablicy w momencie definowania:

  // a. wszystkie wartości
      int tablica_int[ROZMIAR_TABLICY] = {12, 3, 5, 6, 4, 8, 23, 2, 122, 33};

  // b. początkowe wartości
     // int tablica_int[ROZMIAR_TABLICY] = {9, 88, 43, 6};


  
  // 2. nadanie wartości w pętli

  // a. zależnych od wartości zmiennej sterujacej
    /* for (int i=0; i<ROZMIAR_TABLICY; i++){
        tablica_int[i]=i*2;
    } */

  // b. wczytywanych z klawiatury za pomocą scanf
   /* printf("Podaj wartosci tablicy: ");

    for (int i=0; i<ROZMIAR_TABLICY; i++){
        scanf("%d", &tablica_int[i]); 
    } */
    

 
  // 3. zamiana pętli for nadawania wartości na pętlę while
    
    //a.
    /* int k = 0;
    while (k<ROZMIAR_TABLICY){
        tablica_int[k]=k*2;
        k++; 
    }*/
    
    //b.
    /* int i = 0;
    while (i<ROZMIAR_TABLICY){
        scanf("%d", &tablica_int[i]);
        i++;}*/


  
  // 4. zamiana poniższej pętli for na pętlę do
  // (jak zwykle najlepiej wykomentować starą pętlę i wpisać poniżej nową pętlę)

  //for(int i=0; i<ROZMIAR_TABLICY; i++){
//printf("Iteracja %d: tablica_int[%d] = %d\n", i, i, tablica_int[i]);  }

    /* int j=0;

    do {
        printf("Iteracja %d: tablica_int[%d] = %d\n", j, j, tablica_int[j]);
        j++;
    }
    while (j<ROZMIAR_TABLICY);*/


 
 
  // 5. wyszukiwanie wartości maksymalnej w tablicy (pętla for)
  /*int max=0;
  for (int i = 0; i < ROZMIAR_TABLICY; i++){
      if (tablica_int[i]>max) {
          max = tablica_int[i];
      }
  }
    printf("Wartosc maksymalna wynosi: %d\n", max); */
    
    
 
 
  // 6. obliczanie sumy elementów tablicy (pętla while)
  /*int i = 0, suma = 0;
  while (i < ROZMIAR_TABLICY){
      suma += tablica_int[i];
      i++;
  }
  printf("Suma elementow tablicy wynosi: %d\n", suma);*/
  

  //-------------------------------- 3.0 ------------------------------------

  
  
  // 7. tablica z wartościami losowymi i wyszukiwanie zadanych wartości

  // a. nowa definicja tablicy (np. tablicy znaków)
    char tab_char [ROZMIAR_TABLICY];

  // b. nadawanie wartości losowych wyrazom tablicy
  //    (np. liczby z zakresu 33-126, czyli odpowiadające znakom ASCII)
  //    -> odpowiednie wydruki
  
   srand(time(NULL));
  
  for (int i=0; i<ROZMIAR_TABLICY; i++){
    tab_char[i] = 32 + rand()%94+1;
  } 
  
  /* for(int i=0; i<ROZMIAR_TABLICY; i++){
    printf("Iteracja %d: tab_char[%d] = %c\n", i, i, tab_char[i]);  
     } */
  

  // c. sprawdzenie losowości - obliczenie wartości średniej w tablicy
  //    (w odpowiedniej pętli) - porównanie z teoretyczną średnią <- CO TO JEST???
  //    -> odpowiednie wydruki
    float suma = 0;
  
  for (int i = 0; i < ROZMIAR_TABLICY; i++){
      suma += tab_char[i];
  }
 
  float srednia = suma/ROZMIAR_TABLICY;
  printf("Srednia elementow tablicy wynosi: %f\n", srednia); */

//liczenie sredniej teoretycznej 
float srednia_teoretyczna = 0, suma2 = 0;
for (int i = 33; i <= 126; i++){
    suma2 += i;}
srednia_teoretyczna = suma2/(126-33+1);
  printf("Srednia teoretyczna elementow tablicy wynosi: %f\n", srednia_teoretyczna);  
  
  

  // d. wyszukiwanie zadanej wartości
  //    -> odpowiednie wydruki w momencie znalezienia wartości
  //    np. "Znaleziono wartość %.. w %d elemencie tablicy\n", ... <- CO JAK NIE MA????
  
  

  //  d1. wyszukanie tylko jednej (pierwszej) wartości - pętla while
  //      (lub pętla for i break)
  
  /* int szukana;
  printf("Znajdz liczbe w przedziale od 33 do 126.\nPodaj szukana liczbe: ");
  scanf("%d", &szukana);
  
  _Bool znaleziono = 0;
  for (int i = 0; i<ROZMIAR_TABLICY; i++) {
      if (tab_char[i] == szukana) {
         znaleziono = 1;
         printf("Znaleziono wartość %d w %d elemencie tablicy.\n", szukana, i);
         break;
    }
  }
  if (!znaleziono) {
        printf("Nie znaleziono wartości %d.\n", szukana);
  } */
  
  
 // if (szukana != )
  
  
  //  d2. wyszukanie (i wypisanie) wszytskich wartości - pętla for
  //      (lub pętla while)
  
 /*  int szukana;
  printf("Znajdz liczbe w przedziale od 33 do 126.\nPodaj szukana liczbe: ");
  scanf("%d", &szukana);
  
  _Bool znaleziono = 0;
  for (int i = 0; i<ROZMIAR_TABLICY; i++) {
      if (tab_char[i] == szukana) {
         znaleziono = 1;
         printf("Znaleziono wartość %d w %d elemencie tablicy.\n", szukana, i);
         
    }
  }
  if (!znaleziono) {
        printf("Nie znaleziono wartości %d\n", szukana);
  } */

  //-------------------------------- 4.0 ------------------------------------

  
}
