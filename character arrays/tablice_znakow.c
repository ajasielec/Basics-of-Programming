#include <stdio.h>
#define DLUGOSC_NAPISU 100

#define WIELKIE_LITERY_START 65
#define WIELKIE_LITERY_END 90
#define MALE_LITERY_START 97
#define MALE_LITERY_END 122

int main(void) // program zliczania cyfr i innych znaków we wczytywanym napisie
{
    char tab_znakow[DLUGOSC_NAPISU] = {0};
    int c, i, zakres = DLUGOSC_NAPISU - 1;
    
    //przypisywanie znakow do tabllicy
        for(i=0; i<zakres && (c = getchar()) != EOF && c != '\n'; i++){
            tab_znakow[i] = c;
        }
    
    if (c == '\n')
    {
    tab_znakow[i] = '\0';}
    int dlugosc_napisu = i;
    
    
    //printf("%s", tab_znakow);
    
   
    //zamiana wielkich liter na małe i na odwrót
   /* for(i=0; i<dlugosc_napisu; i++){
        
        //zamiana wartosci char na int
        int c_ASCII = (int)tab_znakow[i];
        
        //duze na male
        if (c_ASCII >= 65 && c_ASCII <= 90){
            tab_znakow[i] = (char)(c_ASCII + 32);
        }
        
        //male na duze
        if (c_ASCII >= 97 && c_ASCII <= 122){
            tab_znakow[i] = (char)(c_ASCII - 32);
        }
    }
      printf("%s", tab_znakow); */
      
      
    //zmiana kolejnosci znakow w tablicy
    int j = 0, x, y;
    x = dlugosc_napisu - 1;
    
    while(j<x){
        y = tab_znakow[j];
        tab_znakow[j] = tab_znakow [x];
        tab_znakow [x] = y;
        x--;
        j++;
    }
    printf("%s", tab_znakow);
}

