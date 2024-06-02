#include "bsp.h"

int TCRT_READ()
{
    int L2,L1,M,R1,R2,TCRT_DATA;

    L2 = HAL_GPIO_ReadPin(L2_GPIO_Port,L2_Pin);
    L1 = HAL_GPIO_ReadPin(L1_GPIO_Port,L1_Pin);
    M = HAL_GPIO_ReadPin(M_GPIO_Port,M_Pin);
    R1 = HAL_GPIO_ReadPin(R1_GPIO_Port,R1_Pin);
    R2 = HAL_GPIO_ReadPin(R2_GPIO_Port,R2_Pin);
    TCRT_DATA=L2<<4+L1<<3+M<<2+R1<<1+R2;

    return TCRT_DATA;
}

int Infr_READ()
{
    return HAL_GPIO_ReadPin(Infr_GPIO_Port,Infr_Pin);
}

void LED1_ON()
{
    HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,1);
}

void LED1_OFF()
{
    HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,0);
}

void LED1_TOGGLE()
{
    HAL_GPIO_TogglePin(LED1_GPIO_Port,LED1_Pin);
}

void LED2_ON()
{
    HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,1);
}

void LED2_OFF()
{
    HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,0);
}

void LED2_TOGGLE()
{
    HAL_GPIO_TogglePin(LED2_GPIO_Port,LED2_Pin);
}
