#include "flash.h"

void STMFLASH_Write(uint32_t WriteAddr,uint16_t *pBuffer,uint16_t NumToWrite){
	
	/* ½âËø */
	HAL_FLASH_Unlock();
	
	/* ²Á³ý */
//	FLASH_PageErase(uint32_t PageAddress);
	FLASH_PageErase(WriteAddr);
	
	/* Ð´Èë */
//	HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
	HAL_FLASH_Program(WriteAddr, WriteAddr, (uint64_t)NumToWrite);
	
	/* ÉÏËø */
	HAL_FLASH_Lock();
//	HAL_FLASH_Program(uint32_t TypeProgram, uint32_t Address, uint64_t Data);
	
}
