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
