#include <stdio.h>

// deklaracja funkcji
void prosta_funkcja();

int main (void)
{

  // 1. definicja zmiennej test np. typu int z inicjowaniem
	int test = 5;
  
  // 2. drukowanie wartości zmiennej test
  printf("przed wywolaniem prostej funkcji: %d \n", test);

  // wywołanie funkcji
 // prosta_funkcja();

  // 6. (po wykomentowaniu wywołania powyżej) wywołanie funkcji z argumentem
	prosta_funkcja(test);

  // 7, 8, 9 - co trzeba zmienić po wykonaniu kroków 5 i 6, żeby program zadziałał? 
 //odp. usunąc argument void z deklaracji

  // 2. drukowanie wartości zmiennej test
  printf("po powrocie z prostej funkcji: %d\n", test);
}

// 5. zmiana definicji - przyjmowanie argumentu
void prosta_funkcja( int test )
{

  // 3. definicja zmiennej test np. typu int z inicjowaniem
	test = 10;

  // 4. drukowanie wartości zmiennej test
  printf("wewnątrz prostej funkcji: zmienna lokalna %d\n", test);

  //11. drukowanie wartości argumentu
  printf("wewnątrz prostej funkcji: argument przed modyfikacją: %d \n", test);
  
  // 10. zmiana wartości przesłanego argumentu
  test += 4;
  
  // 11. drukowanie wartości argumentu
  printf("wewnątrz prostej funkcji: argument po modyfikacji: %d \n", test);

}

