//===============================================
#ifndef _GUart_
#define _GUart_
//===============================================
#include "GTypeDef.h"
//===============================================
void GUart_Init(uint baud);
void GUart_Char(char d);
void GUart_Str(const char* d);
//===============================================
#endif
//===============================================
