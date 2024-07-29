#ifndef tiendo1_h
#define tiendo1_h

#include "main.h"
typedef struct
{
	uint8_t sta_button;
uint32_t a;
	GPIO_TypeDef *GPIOx;
	uint16_t GPIO_PIN;
}tiendo1_Typedef;
void tiendo1_handle(tiendo1_Typedef *tiendo1X);
void tiendo1_init(tiendo1_Typedef *tiendo1X,GPIO_TypeDef *GPIOx, uint16_t GPIO_PIN);
#endif
