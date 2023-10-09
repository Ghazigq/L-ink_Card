#ifndef _DISPLAY_EPD_W21_H_
#define _DISPLAY_EPD_W21_H_


#define EPD_W21_MOSI_0    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET)
#define EPD_W21_MOSI_1    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET)

#define EPD_W21_CLK_0    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET)
#define EPD_W21_CLK_1    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET)

#define DEV_Digital_Write(_pin, _value) HAL_GPIO_WritePin(_pin, _value == 0? GPIO_PIN_RESET:GPIO_PIN_SET)
#define DEV_Digital_Read(_pin) HAL_GPIO_ReadPin(_pin)

#define EPD_RST_PIN     GPIOB,GPIO_PIN_1
#define EPD_DC_PIN      GPIOB,GPIO_PIN_0
#define EPD_CS_PIN      GPIOA,GPIO_PIN_7
#define EPD_BUSY_PIN    GPIOA,GPIO_PIN_8

void EPD_1IN54_V2_Init(void);
void EPD_1IN54_V2_Init_Partial(void);
void EPD_1IN54_V2_Clear(void);
void EPD_1IN54_V2_Display(unsigned char *Image);
void EPD_1IN54_V2_DisplayPartBaseImage(unsigned char *Image);
void EPD_1IN54_V2_DisplayPart(unsigned char *Image);
void EPD_1IN54_V2_Sleep(void);

#endif
/***********************************************************
						end file
***********************************************************/


