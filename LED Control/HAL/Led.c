/*******************************************************************************
 *  FILE DESCRIPTION
 *  --------------------------------------------------------------------------*/
/**         \file   Led.c
 *         \brief   Driver for LED module
 *         
 *       \details   -
 ******************************************************************************/

/*******************************************************************************
 *  INCLUDES
 ******************************************************************************/
#include "../MCAL/Inc/Dio.h"
#include "Inc/Led.h"

/*******************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 ******************************************************************************/


/*******************************************************************************
 *  LOCAL DATA
 ******************************************************************************/


/*******************************************************************************
 *  GLOBAL DATA
 ******************************************************************************/


/*******************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 ******************************************************************************/


/*******************************************************************************
 *  LOCAL FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 *  GLOBAL FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 * \syntax          : void Led_On(Led_InstanceType Led_Channel)
 * \Description     : Turns on the desired LED
 * \Sync\Async      : Sync
 * \Reentrancy      : Reentrant
 * \parameters (in) : Led_InstanceType Led_Channel
 * \parameters (out): None
 * \Return value    : None
 ******************************************************************************/
void Led_On(Led_InstanceType Led_Channel){
    Dio_WriteChannel(Led_Channel, HIGH);
}

/*******************************************************************************
 * \syntax          : void Led_Off(Led_InstanceType Led_Channel)
 * \Description     : Turns off the desired LED
 * \Sync\Async      : Sync
 * \Reentrancy      : Reentrant
 * \parameters (in) : Led_InstanceType Led_Channel
 * \parameters (out): None
 * \Return value    : None
 ******************************************************************************/
void Led_Off(Led_InstanceType Led_Channel){
    Dio_WriteChannel(Led_Channel, LOW);
}

/*******************************************************************************
 * \syntax          : void Led_Toggle(Led_InstanceType Led_Channel)
 * \Description     : Toggles the desired LED
 * \Sync\Async      : Sync
 * \Reentrancy      : Reentrant
 * \parameters (in) : Led_InstanceType Led_Channel
 * \parameters (out): None
 * \Return value    : None
 ******************************************************************************/
void Led_Toggle(Led_InstanceType Led_Channel){
    Dio_FlipChannel(Led_Channel);
}

/*******************************************************************************
 *  END OF FILE:    Led.c
 ******************************************************************************/
