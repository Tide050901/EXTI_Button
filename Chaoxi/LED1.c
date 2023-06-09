#include "LED1.h"

void LED1_Init()
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; //推挽输出
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 	//50MHz
	GPIO_Init(GPIOC,&GPIO_InitStructure);
}
void LED1()
{
	BPC_OUT(13) = 0;
}

