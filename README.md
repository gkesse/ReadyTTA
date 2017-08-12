# Auteur

Je suis 
[Gerard KESSE](http://31.33.37.71:8855/presentation/ "Acc�dez � mon site web (ReadyDev)"),  
Ing�nieur en D�veloppement Informatique C/C++/Qt,  
Avec � la fois des comp�tences en Syst�mes Embarqu�s et en Robotique.  

* Site Web : [ReadyDev](http://31.33.37.71:8855 "Acc�dez � mon site web (ReadyDev)")
* Email : [tiakagerard@hotmail.com](mailto:tiakagerard@hotmail.com?subject=Contact&body=Bonjour "Me contactez par email")
* Tel : [(+33) 06.58.77.23.97](tel:00330658772397 "Contactez-moi")
* Localit� : **Toulouse - France**

# ReadyTTA

**ReadyTTA** est une biblioth�que de fonctions C pour le d�veloppement de syst�mes 
embarqu�s multit�ches temps r�el. Elle est construite autour de l'architecture TTA 
(Time Triggered Architecture), une architecture logicielle d�clench�e par le temps et 
certifi�e pour le d�veloppement de syst�mes de s�curit� critique. Elle est portable 
sur plusieurs cibles de microcontr�leurs (8051, PIC) et de microprocesseurs (ARM). 
C'est une biblioth�que d�velopp�e en C et maintenu par 
[Gerard KESSE](http://31.33.37.71:8855/presentation/ "Acc�dez � mon site web (ReadyDev)").

# Syst�me d'Exploitation Embarqu� Simple

```
#include "GSeos.h"
#include "GLed.h"

void main() {
    GSeos_Init(50);
    GLed_Init();
    GSeos_Start();
    while(1) {
        GSeos_Go_To_Sleep();
    }
}
```

# Ordonnancement Coop�ratif

```
#include "GSch.h"
#include "GStateMachine.h"

void main() {
    GSch_Init();
    GState_Init();
    GSch_Add_Task(GState_Light_L1, 0, 1000);
    GSch_Add_Task(GState_Light_L2, 1, 1000);
    GSch_Start();
    while(1) {
        GSch_Dispatch_Tasks();
    }
}
```

* **Structure d'une T�che**

```
typedef data struct {
    void (*pTask)();    // pointeur de t�che
    uint delay;         // delai ou retard d'ex�cution
    uint period;        // periode d'ex�cution
    uchar runMe;        // drapeau d'ex�cution
} GTask;
```

# Ordonnancement Hybride

```
#include "GSchHybrid.h"
#include "GLed.h"

void main() {
    GSch_Init();
    GLed_Init();
    GSch_Add_Task(GLed_Short, 0, 1000, 1); // t�che coop�rative
    GSch_Add_Task(GLed_Long, 1, 20000, 0); // t�che pr�emptive
    GSch_Start();
    while(1) {
        GSch_Dispatch_Tasks();
    }
}
```

* **Structure d'une T�che**

```
typedef data struct {
    void (*pTask)();    // pointeur de t�che
    uint delay;         // delai ou retard d'ex�cution
    uint period;        // periode d'ex�cution
    uchar runMe;        // drapeau d'ex�cution
    uchar coop;         // t�che coop�rative/pr�emptive
} GTask;
```

# Technologies

Le d�veloppement de la biblioth�que **ReadyTTA** a n�cessit� les technologies suivantes :

* Langage : **C**
* Microcontr�leur 8051 : **AT89C52, INFINEON C515**
* Microcontr�leur PIC : **PIC18F452**
* Microprocesseur ARM : **LPC1769**
* IDE 8051: **Keil �Vision**
* IDE PIC: **MPLab**
* IDE ARM: **GNU ARM Eclipse**
* Compilateur 8051 : **SDDC**
* Simulateur de Circuit Electrique : **Proteus**
* Protocoles : **RS232, I2C, SPI, CAN**
* Modules : **Switch , Button, Keypad, LED, 7-segment, LCD, PWD**
* Architecture Logicielle : **TTA (Time Triggered Architecture)**
* Cible : **8051, PIC, ARM**
