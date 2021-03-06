//===============================================
#include "GSchHybrid.h"
#include "GLed.h"
//===============================================
void main() {
    GSch_Init();
    GLed_Init();
    GSch_Add_Task(GLed_Short, 0, 1000, 1); // tâche coopérative
    GSch_Add_Task(GLed_Long, 1, 20000, 0); // tâche préemptive
    GSch_Start();
    while(1) {
        GSch_Dispatch_Tasks();
    }
} 
//===============================================
   