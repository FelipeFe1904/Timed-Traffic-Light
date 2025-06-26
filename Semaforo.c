#include <avr/io.h>
#include "bits.h"
#include "Semaforo.h"

void semaforoInit(void){
    for(int d = 1; d <= 5; d++){
        SETBIT(DDRC, d, 1);    // Sets PC1 to PC5 as outputs
        SETBIT(PORTC, d, 0);   // Initializes them as OFF
    }
}


void setLight(unsigned char bit, unsigned char value){
    SETLIGHT(PORTC, bit, value);
}



