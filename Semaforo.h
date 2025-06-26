#ifndef SEMAFORO_H
#define SEMAFORO_H

#define RED 5        // Traffic Light Red
#define YELLOW 4     // Traffic Light Yellow
#define GREEN 3      // Traffic Light Green
#define RED_PD 2     // Pedestrian Red
#define GREEN_PD 1   // Pedestrian Green

#define SETLIGHT(reg, bit, value) value ? (reg|= (1<<bit)):(reg&=~(1<<bit))

void semaforoInit(void);
void setLight(unsigned char bit, unsigned char value);

#endif