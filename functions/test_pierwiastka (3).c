#include<stdio.h>
#include<math.h>

#define ACCURACY (1.e-5) // do przeprowadzania obliczeń i sprawdzenia dokładności wyniku

// 1 i 2 zaprojektowanie prototypu funkcji obliczania pierwiastka i umieszczenie go 
//       jako deklaracji funkcji
double pierwiastek();
void ObliczPierwiastek();

// 0. przed wykonaniem ćwiczenia cały kod w funkcji main (analiza, uruchomienie)   
int main( void ) {
  double liczba;

   for(;;){
      printf("\nPodaj wartość liczby dodatniej (-1 kończy program):\n");
      scanf("%lf",&liczba);
    
    if(liczba<0.0) break;
    
	//wywolanie funkcji void
	//ObliczPierwiastek(liczba);

 // 3. wywołanie zaprojektowanej funkcji obliczania pierwiastka
   pierwiastek(liczba);

   //printf("%lf\n", pierwiastek(liczba));

  //pierwiastek(pierwiastek(liczba));
   
// 4. wydruk obliczonego pierwiastka
// ewentualne dodatkowe wywołania funkcji obliczania pierwiastka, zgodnie z instrukcją
    printf("pierwiastek liczby: obliczony %18.15lf, dokładny %18.15lf\n", 
	   pierwiastek(liczba), sqrt(liczba));


  
// 5. zakończenie nieskończonej pętli for i funkcji main
   }
}


   
//MOJA FUNKCJA 
 // 6. nagłowek - początek definicji funkcji
 double pierwiastek (double arg) {

    double pierwiastek = 1.0;
    double temp; int iteracje=0;
    // obliczenia pierwiastka za pomocą wzoru Herona
    do{
      iteracje++;
      temp = pierwiastek;
      pierwiastek = 0.5 * (temp + arg/temp);


    } while(fabs(pierwiastek*pierwiastek - arg)/arg > ACCURACY); 
       
    return(pierwiastek);
  }




//FUNKCJA VOID
void ObliczPierwiastek(double liczba){

// wariant 1. funkcja zakłada, że argument jest nie mniejszy niż zero
// wariant 2. dla liczb mniejszych od zera funkcja zwraca kod błędu: -1
//   implementacja w kodzie, np.
//  if(arg<0){
//    // obsługa błędu wejścia, np.
//    return(-1.0); // wyjaśnienie w dokumentacji
//  }

    
    // 7. przekształcenie kodu poniżej, tak aby stanowił treść funkcji
    //    (z odpowiednim argumentem i własnymi zmiennymi lokalnymi)
    //    (uwaga: brak nieskończonej pętli for - co zamiast break?)
double pierwiastek = 1.0;
    double temp; int iteracje=0;

    // obliczenia pierwiastka za pomocą wzoru Herona
    do{
      iteracje++;
      temp = pierwiastek;
      pierwiastek = 0.5 * (temp + liczba/temp);

      // dodatkowe wydruki kontrolne
      // np. do debugowania działania funkcji

//    printf("wartość %20.15lf, \tbłąd  %20.15lf,     błąd kwadratu %20.15lf\n", 
//	   pierwiastek, fabs(pierwiastek - temp)/pierwiastek, 
//	   fabs(pierwiastek*pierwiastek - liczba)/liczba);
      
      
      // sprawdzenie warunku wyjścia z pętli - błąd względny obliczania pierwiastka
} while(fabs(pierwiastek*pierwiastek - liczba)/liczba > ACCURACY); 

// wydruki kontrolne - można je wyłączyć po zdebugowaniu funkcji
   /* printf("\nliczba do obliczenia pierwiastka: %18.15lf\n", liczba);
    printf("\tzałożona dokładność (względna) obliczania pierwiastka: %18.15lf\n", 
	   ACCURACY); */
    // ten wydruk można (po odpowiedniej modyfikacji skopiować także do main)
   printf("pierwiastek liczby: obliczony %18.15lf, dokładny %18.15lf\n", 
	   pierwiastek, sqrt(liczba));
    printf("liczba iteracji %d, błąd bezwzględny: %18.15lf, błąd względny: %18.15lf\n",
	   iteracje, pierwiastek-sqrt(liczba), (pierwiastek-sqrt(liczba))/sqrt(liczba));


    // 8. zamiana zakończenia funkcji main (z pętlą for) na zakończenie funkcji
    //    obliczania pierwiastka

    // ---------------- 3.0 --------------------------------
}




