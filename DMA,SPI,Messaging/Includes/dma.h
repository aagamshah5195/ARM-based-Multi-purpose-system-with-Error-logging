/***************************************************************************
* Copyrights 2016 Akshit Shah and Aagam Shah All Rights Reserved
* The information contained herein is property of the Authors.
* The copying and distribution of the files is prohibited except by express written agreement with the Authors.

* Authors: Akshit Shah and Aagam Shah
*
* **************************************************************************/
/*
 * dma.h
 * Created on: Oct 31, 2016
 *
 */

#ifndef INCLUDES_DMA_H_
#define INCLUDES_DMA_H_

void memmove_dma8(uint8_t * src, uint8_t * dst, uint32_t length);
void memmove_dma32(uint32_t * src, uint32_t * dst, uint32_t length);

#endif /* INCLUDES_DMA_H_ */
