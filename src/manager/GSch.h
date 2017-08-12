//===============================================
#ifndef _GSch_
#define _GSch_
//===============================================
#include "GTypeDef.h"
//===============================================
typedef data struct {
    void (*pTask)();
    uint delay;
    uint period;
    uchar runMe;
} GTask;
//===============================================
void GSch_Init();
void GSch_Start();
void GSch_Dispatch_Tasks();
void GSch_Add_Task(void (*pTask)(), const uint delay, const uint period);
//===============================================
#endif
//===============================================
