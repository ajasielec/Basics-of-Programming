#include <stdio.h>

int main(void)
{
  
  char c;

    printf("Aby zakończyć program wciśnij Q.");  


 for(;;) {

    printf("\nWprowadź cyfrę od 1 do 5: ");  
    scanf(" %c",&c); // wielokrotne wczytywanie pojedynczego znaku (jak pozbyć się \n ?)
   
  
   if (c=='1') { 
      printf("Wprowadzono: 1\n");
      }
      
   else if (c=='2') {
      printf("Wprowadzono: 2\n");
   }
      
   else if (c=='3') {
      printf("Wprowadzono: 3\n");
   }
      
   else if (c=='4') {
      printf("Wprowadzono: 4\n");
   }
      
   else if (c=='5') {
      printf("Wprowadzono: 5\n");
    }
    
    else if (c=='Q' || c=='q') {
        return(-1);
    }
      
    else {
      printf("Wprowadzono: znak spoza zakresu 1-5\n");
    }
   }
}
