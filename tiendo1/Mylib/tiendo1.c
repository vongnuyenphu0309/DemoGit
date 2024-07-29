#include "tiendo1.h"
uint8_t sta_button;
uint32_t a=0;
	void tiendo1_handle(tiendo1_Typedef *tiendo1X)
	{
		tiendo1X->sta_button = HAL_GPIO_ReadPin(tiendo1X->GPIOx, tiendo1X-> GPIO_Pin);
		if (tiendo1X->sta_button ==0)
		{
			HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_SET);
			HAL_Delay(500);
			HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,GPIO_PIN_RESET);
			HAL_Delay(500);
		}
		if (tiendo1X->sta_button==1)
		{
			if (tiendo1X->a==0)
			{
			for(int a=1;a<=1999;a++)
			{
			TIM3->CCR1=a;
				HAL_Delay(1);
			}
			}else if (a==1999)
			for (int a=1999;a>=0;a--)
			{
				TIM3->CCR1=a;
				HAL_Delay(1);
			}
				
		}
	}
	void tiendo1_init(tiendo1_Typedef *tiendo1X,GPIO_TypeDef *GPIOx, uint16_t GPIO_PIN)
	{
		tiendo1X->GPIOx=GPIOx;
		tiendo1X->GPIO_PIN=GPIO_PIN;
	}