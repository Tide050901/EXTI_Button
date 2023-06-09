#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "WeiDai.h"
#include "OLED.h"
#include "CountSensor.h"
int main()
{
	CountSensor_Init();
	LED_Init();
	OLED_Init();
	OLED_ShowString(1,1,"Code is Running!");
	while(1)
	{
		
		
	}
	
	
}
