/*
 * aes_dma.h
 *
 * Created: 5/17/2013 11:07:43 AM
 *  Author: CellaSecure
 */ 


#ifndef AES_DMA_H_
#define AES_DMA_H_

#include "stdbool.h"
#include "dmaca.h"
#include "aes.h"

void aes_init(void);

void ram_aes_ram(bool encrypt, unsigned short int u16BufferSize, unsigned int *pSrcBuf, unsigned int *pDstBuf);

#endif /* INCFILE1_H_ */