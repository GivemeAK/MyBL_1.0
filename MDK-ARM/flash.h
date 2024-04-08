#ifndef __FLASH_H
#define __FLASH_H

#include "stm32f1xx.h"
#include "stm32f1xx_hal_flash.h"

void STMFLASH_Write(uint32_t WriteAddr,uint16_t *pBuffer,uint16_t NumToWrite);		//从指定地址开始写入指定长度的数据
void STMFLASH_Read(uint32_t ReadAddr,uint16_t *pBuffer,uint16_t NumToRead);   		//从指定地址开始读出指定长度的数据


#endif /* __FLASH_H */


