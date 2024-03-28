#include <stdio.h>
#include <limits.h>

#define WIELKOSC 5

// funkcja oblicza potęgę całkowitą liczby całkowitej
int potega_int(int m, int n);
int oblicz_wielomian_int(int tab_wsp[], int argument);
int oblicz_wielomian_int_Horner (int tab_wsp[], int argument);

int main (void)
{
  int i;
  //for (i = 0; i < 10; i++){
   // printf("i = %d \t2^i = %d \t(-3)^i = %d\n", 
	//   i, potega_int(2,i), potega_int(-3,i));
//  }

// printf("%d",oblicz_wielomian_int(tab[i])

int liczba;
int tablica[WIELKOSC];
	
	for (int i = 0; i < WIELKOSC; i++) {
		printf("Podaj %d wspolczynnik: ", i);
		scanf("%d", &tablica[i]);
		}

printf("Podaj argument: ");
scanf("%d", &liczba);

//dla tablicy o wielkosci 5 
int wynik = oblicz_wielomian_int(tablica, liczba);
int wynik_horner = oblicz_wielomian_int_Horner(tablica, liczba);
printf("Wynik wielomianu: %d", wynik);
printf("\nWynik wielomianu Hornera: %d\n", wynik_horner);
}



// funkcja oblicza potęgę całkowitą liczby całkowitej
int potega_int( // funkcja zwraca wartość potegi podstawa^wykładnik
	      int podstawa, // [in]: zadana podstawa 
	      int wykladnik // [in]: zadany wykładnik
	       )
{
  int potega = 1;
  for (int i = 1; i <= wykladnik; i++){
    potega *= podstawa;
  }
  return potega;


}

// modyfikacje potega_int_1 - sprawdzanie w trakcie obliczeń czy obliczane wartości 
//                           nie przekraczają zakresu liczb całkowitych INT_MAX
//                           (zdefiniowane w pliku limits.h)


// Przypadek schematu Hornera dla wielomianu 4 stopnia
// a[0] + a[1]*x + a[2]*x^2 + a[3]*x^3 + a[4]*x^4:
//
// a[0] + x*( a[1] + x*( a[2] + x*( a[3] + x*a[4]) ) )
//


//Z10
int oblicz_wielomian_int(int tab_wsp[], int argument){
 
int wynik = tab_wsp[0] + tab_wsp[1] * argument + tab_wsp[2] * potega_int(argument, 2) + tab_wsp[3] *    potega_int(argument, 3) + tab_wsp[4] * potega_int(argument, 4);
 
return (wynik);
}

//z16
int oblicz_wielomian_int_Horner (int a[], int x){
 
int wynik = a[0] + a[1]*x + a[2]* potega_int(x,2) + a[3] * potega_int(x,3) + a[4]* potega_int(x,4);

return wynik;
}

