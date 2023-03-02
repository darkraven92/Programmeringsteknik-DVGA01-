Skriv ett program som frågar efter två heltal & adderar de 
två talen. Resultatet presenteras på skärmen

#include <stdio.h>

int main() {
    int num1, num2, summa;

    // Fråga användaren om två heltal
    printf("Ange det första heltalet: ");
    scanf("%d", &num1);
    printf("Ange det andra heltalet: ");
    scanf("%d", &num2);

    // Addera de två heltalen
    summa = num1 + num2;

    // Presentera resultatet
    printf("Summan av %d och %d är %d\n", num1, num2, summa);

    return 0;
}

Ändra föregående program, så att det första talet divideras 
med andra talet & kvoten & resten skrivs på skärmen.
#include <stdio.h>

int main() {
    int num1, num2, kvot, rest;

    // Fråga användaren om två heltal
    printf("Ange det första heltalet: ");
    scanf("%d", &num1);
    printf("Ange det andra heltalet: ");
    scanf("%d", &num2);

    // Beräkna kvoten och resten
    kvot = num1 / num2;
    rest = num1 % num2;

    // Presentera resultatet
    printf("%d dividerat med %d ger kvoten %d och resten %d\n", num1, num2, kvot, rest);

    return 0;
}
