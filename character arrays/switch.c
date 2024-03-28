#include <stdio.h>
int main(void) // program zliczania cyfr i innych znak�w we wczytywanym napisie
{
    int i, nwhite = 0, nother = 0; // zmienne do zliczania
    int ndigit[10] = { 0 }; // w tym tablica inicjowana zerami

    int c; // c definiowane jako int bo EOF niekoniecznie jest znakiem
    while ((c = getchar()) != EOF) { // wczytywanie kolejnych znak�w a� do EOF
        
        if (c >= 48 && c <= 57)
        {
            ndigit[c - '0']++;

            printf("%c, %d,  %d\n", c, c - '0', ndigit[c - '0']); //- wydruk kontrolny
        }   // (istniej� specjalne konstrukcje u�atwiaj�ce sprawdzanie na bie��co
            // poprawno�ci programu (np. assert, static_assert) )
        else if (c == ' ' || c == '\n' || c == '\t') // znaki traktowane jako "white space"
        {
            nwhite++;
        }
        else{
            nother++;
        }
    }
    printf("\ndigits:\n");
    for (i = 0; i < 10; i++) printf("'%d' = %d\n", i, ndigit[i]);
    printf("white space = %d\nother =  %d\n", nwhite, nother);
    return 0;
}
