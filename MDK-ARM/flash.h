#ifndef __FLASH_H
#define __FLASH_H

#include "stm32f1xx.h"
#include "stm32f1xx_hal_flash.h"

void STMFLASH_Write(uint32_t WriteAddr,uint16_t *pBuffer,uint16_t NumToWrite);		//��ָ����ַ��ʼд��ָ�����ȵ�����
void STMFLASH_Read(uint32_t ReadAddr,uint16_t *pBuffer,uint16_t NumToRead);   		//��ָ����ַ��ʼ����ָ�����ȵ�����


#endif /* __FLASH_H */


