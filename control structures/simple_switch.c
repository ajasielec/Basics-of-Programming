#include <stdio.h>

int main(void)
{
  
  char c;
  
 printf("Aby zakończyć program wciśnij Q.");
 
  for(;;) {

    printf("\nWprowadź cyfrę od 1 do 5: ");
    scanf(" %c",&c); // wielokrotne wczytywanie pojedynczego znaku (jak pozbyć się \n ?)
   
    switch (c) {
        
    case '1':
      printf("Wprowadzono: 1\n");
      break;
      
    case '2':
      printf("Wprowadzono: 2\n");
      break;
      
    case '3':
      printf("Wprowadzono: 3\n");
      break;
      
    case '4':
      printf("Wprowadzono: 4\n");
      break;
      
    case '5':
      printf("Wprowadzono: 5\n");
      break;
      
    case 'Q': return(-1);
    case 'q': return(-1);

      
    default:
      printf("Wprowadzono: znak spoza zakresu 1-5\n");
      break;
    }
  
}

}