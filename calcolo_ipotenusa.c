#include <stdio.h>
#include <math.h>
#define MAX 10
/* entry point */
int main(){
/* dichiarazione variabili */
    int cateto1, cateto2; // Lunghezza dei cateti
    int ipotenusa; // Lunghezza calcolata dell'ipotenusa
/* istruzioni */
    cateto1 = 3; // Assegnamento
    cateto2 = 4; // Assegnamento
    ipotenusa = sqrt((cateto1*cateto1)+(cateto2*cateto2)); // Calcolo
/* istruzioni di output */
    printf(“L'ipotenusa vale %d \n”, ipotenusa); // Stampa
/* exit point */
    return 0; // Punto d'uscita
}