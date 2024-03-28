
  /* 7. PROBLEMY Z PRECYZJĄ LICZB ZMIENNOPRZECINKOWYCH */

  //  printf("\nProblemy z precyzją zmiennych float i double:\n");

  // //** kłopoty z precyzją:
  //  float fx1 = 1.23e7;
  //  float fx2 = 1.23e-7;

  //  printf("\nfloat: fx1 = %20.15lf, fx2 = %20.15lf, \n", fx1, fx2);
  //  if( (fx1+fx2)-fx1 == fx2 ){
  //    printf("\n(fx1+fx2)-fx1 == fx2 (dla float)\n");
  //  }
  //  else {
  //    printf("\n(fx1+fx2)-fx1 != fx2 (dla float) ( (fx1+fx2)-fx1 = %.15lf )\n",
  //  	   (fx1+fx2)-fx1);
  //  }

  // //** kłopoty z precyzją:
  //  double dx1 = 1.23e7;
  //  double dx2 = 1.23e-7;


  //  printf("\ndouble: dx1 = %20.15lf, dx2 = %20.15lf, \n",
  //  	 dx1, dx2);
  //  if( (dx1+dx2)-dx1 == dx2 ){
  //    printf("\n(dx1+dx2)-dx1 == dx2 (dla double)\n");
  //  }
  //  else {
  //    printf("\n(dx1+dx2)-dx1 != dx2 (nawet dla double!) ( (dx1+dx2)-dx1 = %.15lf )\n",
  //  	   (dx1+dx2)-dx1);
  //  }
 

  // //** obsługa błędów - temat rzeka
  // //** wariant prosty:

  // //** chcemy obliczyć 1 / ( (fx1+fx2)-fx1 ) - powinno być równe 1/fx2

  // //** próba uniknięcia dzielenia przez zero:
  // //** if( fx2 != 0.0 ){ - błędy: 1. (fx1+fx2)-fx1 != fx2, 2. porównanie float

  // //** poprawna próba uniknięcia dzielenia przez zero lub utraty precyzji:
  // //** (należy wcześniej odkomentować definicje stałej nazwanej TOLERANCE na początku pliku)
  //  if( fabs ((fx1+fx2)-fx1) < TOLERANCE){
  //    printf("\nPróba dzielenia przez liczbę bliską zero! Przerwanie programu!\n");    
    //return(-1); 
    // //** lub exit(-1) - exit przerywa wykonanie całego programu, nie tylko aktualnej funkcji    
  //  }

  //  float fx3 = 1.0f / ((fx1+fx2)-fx1); // powinno byc równe 1/fx2...
  //  printf("\n1.0f / ((fx1+fx2)-fx1) = %20.15lf\n", fx3);
  
  //  double dx3 = 1.0 / ((dx1+dx2)-dx1); // powinno byc równe 1/dx2...
  //  printf("\n1.0/((dx1+dx2)-dx1) = %.12lf  != 1.0/dx2 = %.12lf\n", dx3, 1.0/dx2);
  //  printf("Zostały tylko trzy cyfry znaczące na skutek skończonej precyzji...\n");

  // //** !!!!!!!! ******* !!!!!!!!
  // //** ZADANIA WŁASNE (po odkomentowaniu powyższego kodu i sprawdzeniu jego działania)
  // //**(opis działania kodu z wyjaśnieniem przyczyn problemów z precyzją powinien znaleźć sie w sprawozdaniu)
  // //** - zadania rozszerzające z tematu laboratorium  
  
  printf("\nProgram dotarł do końca\n");
  return(0);
}

