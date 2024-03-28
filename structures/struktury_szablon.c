//$biblioteki
#include <stdio.h>

//$struktura
//# definicja typu strukturalnego (można podać obie postacie i korzystać później z jednej z nich)
//# 3.a bez użycia typedef
struct Kot
{
  char* imie;
  int wiek; //$ w latach
  double waga; //$ w kilogramach
};

//# 3.b z użyciem typedef
typedef struct 
{
  char* imie;
  int wiek; //$ w latach
  double waga; //$ w kilogramach
}Kot;

//$deklaracje funkcji
//# 5.1.a deklaracja funkcji fun_strukt
void fun_struct(Kot kot_w_funkcji);

//# 5.3.a deklaracja funkcji fun_strukt_out
Kot fun_struct_out(Kot kot_out);

//# 5.5.a deklaracja funkcji fun_strukt_wsk
void fun_struct_wsk(Kot* kot_2);

//$ 1.deklaracja funkcji fun_struct_wsk_kopia
Kot fun_struct_wsk_kopia(Kot* kot_wsk);


//$ funkcja main
int main (void)
{

  //# 4.1 definicja zmiennej (np. obiekt_1) typu strukturalnego
  Kot kot_1;

  //# 4.2 nadanie wartości pól zmiennej obiekt_1 z pomocą operatora .
  kot_1.imie = "Mariusz";
  kot_1.wiek = 3;
  kot_1.waga = 5.23;

  //# 4.3 wypisanie wartości pól zmiennej obiekt_1 z pomocą operatora .
  //#   np. printf("Początkowe wartości pól obiekt_1: ....", ....);
  printf("\nPoczątkowa wartość pól kot_1: imię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_1.imie, kot_1.wiek, kot_1.waga);

  //# 5.2.1 wywołanie funkcji fun_strukt (po deklaracji w p. 5.1.a i definicji w p. 5.1.b)
  //#      z obiektem 1 jako argumentem 
  fun_struct(kot_1);

  //# 5.2.2 wypisanie wartości pól zmiennej obiekt_1 z pomocą operatora .
  printf("\nPo wywołaniu fun_strukt - wartości pól kot_1:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_1.imie, kot_1.wiek, kot_1.waga);

  //# 5.4.1 wywołanie funkcji fun_strukt_out (po deklaracji w p. 5.3.a i definicji w p. 5.3.b)
  //#z obiektem_1 jako argumentem i przepisaniem wyniku z powrotem do obiektu_1
	kot_1 = fun_struct_out(kot_1);
  
  //# 5.4.2 wypisanie wartości pól zmiennej obiekt_1 z pomocą operatora .
  printf("\nPo wywołaniu fun_strukt_out i przypisaniu wyniku do kot_1 ");
  printf("- wartości pól kot_1:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_1.imie, kot_1.wiek, kot_1.waga);

  
  //# 4.4 definicja drugiej zmiennej typu strukturalnego  (np. obiekt_2)
  // #   połączona z inicjowaniem za pomocą listy wartości
  Kot kot_2 = {"Rudy", 5, 7.46};
  

  //# 4.5 definicja wskaźnika (np. obiekt_2_wsk) do struktury zainicjowanego adresem obiektu_2
  Kot *kot_2_wsk = &kot_2;

  //# 4.6 wypisanie wartości pól obiektu_2 z pomocą wskaźnika do obiektu i operatora ->
  printf("\n\nPoczątkowe wartości pól kot_2: imię: %s, wiek: %d, waga: %.2lf\n",
    kot_2_wsk->imie, kot_2_wsk->wiek, kot_2_wsk->waga);

  
  //# 5.6.1 wywołanie funkcji fun_strukt_wsk (po deklaracji w p. 5.5.a i definicji w p. 5.5.b)
  //ze zmienną obiekt_2_wsk jako argumentem
  fun_struct_wsk(kot_2_wsk);
  

  //# 5.6.2 wypisanie wartości pól zmiennej obiekt_2 z pomocą wskaźnika do obiektu i operatora ->
printf("\nPo wywołaniu fun_strukt_wsk - wartości pól kot_2:\nimię: %s, wiek: %d, waga: %.2lf\n",
    kot_2_wsk->imie, kot_2_wsk->wiek, kot_2_wsk->waga);

  //# 4.7 definicja trzeciej zmiennej typu strukturalnego  (np. obiekt_3)
  //#   połączona z inicjowaniem za pomocą przepisania zawartości obiektu_2 w jednej operacji przypisania
   Kot kot_3 = kot_2;

  //# 4.8 wypisanie wartości pól zmiennej obiekt_3 z pomocą operatora .
  printf("\n\nPoczątkowe wartości pól kot_3: imię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_3.imie, kot_3.wiek, kot_3.waga);

  //-------------------------------- 3.0 ------------------------------------

  // 8. wywołanie funkcji fun_strukt_wsk_kopia (po odpowiedniej deklaracji i definicji)
  //    z adresem obiektu 3 jako argumentem oraz przypisanie (skopiowanie) zwracanej przez
  //    fun_strukt_wsk_kopia struktury (z całą zawartością) do nowej zmiennej obiekt_4
  //    zaprojektowanego typu w operacji inicjowania
	Kot kot_4 = fun_struct_wsk_kopia(&kot_3);

  //    wypisanie wartości pól zmiennej obiekt_4 z pomocą operatora .
  printf("\nPoczątkowe wartości pól kot_4: imię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_4.imie, kot_4.wiek, kot_4.waga);

  // 10. wywołanie funkcji fun_strukt_wsk_inout (po odpowiedniej deklaracji i definicji)
  //     z adresem obiektu 4 jako argumentem

  //    wypisanie wartości pól zmiennej obiekt_4 z pomocą operatora .
  //    np. printf("Po wywołaniu fun_strukt_wsk_inout - wartości pól obiekt_4: ....", ....);

  printf("\nKoniec programu.\n");
}

//$ definicje funkcji
//$FUNKCJA 1
//# 5.1.b definicja funkcji fun_strukt
void fun_struct(Kot kot_w_funkcji)
{
//# wypisanie wartości pól struktury przesłanej jako argument
printf("Wewnątrz fun_strukt - wartości pól obiektu argumentu:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_w_funkcji.imie, kot_w_funkcji.wiek, kot_w_funkcji.waga);

  //# modyfikacja wartości pól struktury
  kot_w_funkcji.imie = "Michalina";
  kot_w_funkcji.wiek = 4;
  kot_w_funkcji.waga = 7.12;

  //# wypisanie zmodyfikowanych wartości pól struktury 
printf("\nWewnątrz fun_strukt - wartości pól po modyfikacji:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_w_funkcji.imie, kot_w_funkcji.wiek, kot_w_funkcji.waga);
}


//$FUNKCJA 2
//# 5.3.b definicja funkcji fun_strukt_out
Kot fun_struct_out(Kot kot_out)
{
  //# wypisanie wartości pól struktury przesłanej jako argument
  printf("\n\nWewnątrz fun_strukt_out - wartości pól obiektu argumentu:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_out.imie, kot_out.wiek, kot_out.waga);

  //# modyfikacja wartości pól struktury
  kot_out.imie = "Andrzej";
  kot_out.wiek = 7;
  kot_out.waga = 6.98;

  //# wypisanie zmodyfikowanych wartości pól struktury
  printf("\nWewnątrz fun_strukt_out - wartości pól po modyfikacji:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_out.imie, kot_out.wiek, kot_out.waga);

  //# zwrócenie struktury ze zmodyfikowanymi wartościami pól do funkcji wywołującej
  return(kot_out);
}


//$FUNKCJA 3 
//# 5.5.b definicja funkcji fun_strukt_wsk
void fun_struct_wsk (Kot *kot_2)
{
//# wypisanie wartości pól struktury wskaźnik do której został przesłany jako argument
  printf("\nWewnątrz fun_strukt_wsk - wartości pól obiektu argumentu:\nimię: %s, wiek: %d, waga: %.2lf\n",
    kot_2->imie, kot_2->wiek, kot_2->waga);
  

  //# modyfikacja wartości pól struktury
  (*kot_2).imie = "Franciszek";
  kot_2 -> wiek = 12;
  kot_2 -> waga = 7.99;
  

  //# wypisanie zmodyfikowanych wartości pól struktury 
 printf("\nWewnątrz fun_strukt_wsk - wartości pól po modyfikacji:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_2->imie, kot_2->wiek, (*kot_2).waga);
}

//$FUNKCJA 4
//$ 1.definicja funkcji fun_struct_wsk_kopia
Kot fun_struct_wsk_kopia(Kot *kot_wsk)
{
  //$ przepisania zawartości struktury do zmiennej lokalnej
  Kot nowy_kot;
  Kot *kot_wsk = &nowy_kot;

  //$ modyfikacja zawartoci struktury do zmiennej lokalnej
  kot_wsk->imie = "Bobik";
  kot_wsk->wiek = 20;
  kot_wsk->waga = 10.23;
  
  //$ wypisanie nowych wartości
   printf("\nwewnątrz fun_strukt_wsk_kopia - wartości po modyfikacji:\nimię: %s, wiek: %d, waga: %.2lf\n"
    ,kot_wsk->imie, kot_wsk->wiek, (*kot_wsk).waga);

return (nowy_kot);
}






