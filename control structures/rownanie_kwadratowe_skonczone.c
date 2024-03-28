#include <stdlib.h> // USES
#include <stdio.h> // USES
#include <math.h> // USES
#include <complex.h> // USES

#define TOLERANCJA 1e-9 //tolerancja

#define SCALAR double
//#define SCALAR float

#define SMALL_NUMBER 1.e-20 // czy wystarczy jedna wartość dla float i dla double?


int main(void)
{
  // rozwiązanie równania kwadratowego ax^2 + bx + c = 0

  printf("\nProgram rozwiązywania równania kwadratowego a^lx^2 + b^kx + c = 0\n");

  // prosta wersja: int a, b, c;
  SCALAR a, b, c, k, l;
  
  printf("\nPodaj parametr a: "); scanf("%lf",&a); // adres! (miejsce na wpisanie wartości)
  printf("Podaj parametr b: "); scanf("%lf", &b); // uwaga: inny format dla float!
  printf("Podaj parametr c: "); scanf("%lf", &c);
 
  printf("Podaj potege parametru a: "); scanf("%lf", &l);
  printf("Podaj potege parametru b: "); scanf("%lf", &k);
  
b=pow(b,k); //zadanie 15
a = pow(a,l); //zadanie 12



  // if(a==0 && b==0){ // alternatywa: if( a==0 || b==0 ) - zależnie od kontraktu
  if( fabs(a)<SMALL_NUMBER && fabs(b)<SMALL_NUMBER ){ // poprawnie
    printf("Błędne dane: a i b równe 0 (zbyt bliskie 0). Przerwanie programu.\n");
    exit(-1);
  }
  
  else{
    
    
    //ZADANIE 14
    //rownanie liniowe
    if(fabs(a)<TOLERANCJA) { 
      printf("Równanie liniowe:\n");
   SCALAR x;
   x = -c/b;
   printf("Jeden pierwiastek x = %20.15lf\n",x);
    }
    
    
    //liczenie delty
    else{
      SCALAR delta;  
      delta = b*b - 4*a*c; 
      
      
      //ZADANIE 14
      //pierwiastki zespolone
      if(delta<0){
    printf("Dwa pierwiastki zespolone:\n");

	SCALAR complex x1,x2;
	
	double complex negSqrt = csqrt(delta);
	double pReal = creal(negSqrt);
    double pImag = cimag(negSqrt);
    
	SCALAR complex zespolona = pReal + pImag*I;

	x1 = (-b-negSqrt)/2*a;
	x2 = (-b+negSqrt)/2*a;

	printf("x1 = %.2f + %.2fi\tx2 = %.2f + %.2fi\n", creal(x1), cimag(x1), creal(x2), cimag(x2));
      } 
      
      
      
      else if (delta == 0){
	printf("Jeden pierwiastek rzeczywisty: x = %20.15lf\n", -b/(2*a) );
      } 
      
      
    //oblicznie pierwiastkow
      else {
	SCALAR temp = sqrt(delta);
	SCALAR x1 = (-b-temp)/(2*a);
	SCALAR x2 = (-b+temp)/(2*a);
	
	printf("Dwa pierwiastki rzeczywiste: x1 = %20.15lf, x2 = %20.15lf\n",
	       x1, x2);
	       
 
 //ZADANIE 12
 //sprawdzenie czy pierwiastki są pierwiastkami (dla a=12, b=-45, c=10)
		double wzorzec1 = 0.22049;
		double wzorzec2 = 3.7795;
		if (fabs(x1 - wzorzec1)<=TOLERANCJA) {
	printf("Dokladnosc bezwzgledna x1");}
		if (fabs((x1 - wzorzec1)/wzorzec1)<=TOLERANCJA) {
	printf("Dokladnosc wzgledna x1");}

		if (fabs(x2 - wzorzec2)<=TOLERANCJA) {
	printf("Dokladnosc bezwzgledna x2");}
		if (fabs((x2 - wzorzec2)/wzorzec2)<=TOLERANCJA) {
	printf("Dokladnosc wzgledna x2");}


		 
	//ZADANIE 11
	//sprawdzenie porawnosci wyniku
		 if(fabs(x1-x2)<TOLERANCJA) {
	       printf("\nRoznica wartosci jest rowna 0 (zbyt bliska 0)");}
      }  
    } // znaczenie wcięć i nawiasów klamrowych dla zwiekszenia czytelności kodu
  }

  return(0);
}

// Lab 
// Uzupełnienie programu o obsługę wszystkich przypadków liczbowych danych wejściowych
// Różne przypadki kontraktu - uwzględniające lub nie skończoną precyzję
