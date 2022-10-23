/*******************************************************************************
 *  FILE DESCRIPTION
 *  --------------------------------------------------------------------------*/
/**         \file   Led_Control.c
 *         \brief   Application for LED control
 *         
 *       \details   -
 ******************************************************************************/

/*******************************************************************************
 *  INCLUDES
 ******************************************************************************/
#include "../HAL/Inc/Led.h"
#include "../SERVICE/Delay.h"
#include "Led_Control.h"

/*******************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 ******************************************************************************/
#define OFF                     0
#define ON                      1

/*******************************************************************************
 *  LOCAL DATA
 ******************************************************************************/


/*******************************************************************************
 *  GLOBAL DATA
 ******************************************************************************/
uint32 ON_OFF[2];

/*******************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 ******************************************************************************/
void Delay_ISR(void);

/*******************************************************************************
 *  LOCAL FUNCTIONS
 ******************************************************************************/
void Delay_ISR(void){
    static uint8 i;
    Led_Toggle(GREEN_LED);
    Delay_Ms(ON_OFF[i++]);
    i &= 1;
}

/*******************************************************************************
 *  GLOBAL FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 * \syntax          : void Led_Control(void)
 * \Description     : Toggles an LED after for given ON and OFF time
 * \Sync\Async      : Sync
 * \Reentrancy      : Non-Reentrant
 * \parameters (in) : None
 * \parameters (out): None
 * \Return value    : None
 ******************************************************************************/
void Led_Control(uint32 OnTime, uint32 OffTime){
    ON_OFF[ON]  = OnTime;
    ON_OFF[OFF] = OffTime;

    Delay_Timer_Init(&Delay_ISR);

    Led_On(GREEN_LED);
    Delay_Ms(ON_OFF[ON]);

    while(1){

    }
}

/*******************************************************************************
 *  END OF FILE:    Led_Control.c
 ******************************************************************************/
