/******************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------*/
/**         \file   Port_Lcfg.c
 *         \brief   Configuration for Port module
 *         
 *       \details   -
 *****************************************************************************/

/******************************************************************************
 *  INCLUDES
 *****************************************************************************/
#include "Port_Cfg.h"

/******************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *****************************************************************************/


/******************************************************************************
 *  LOCAL DATA
 *****************************************************************************/


/******************************************************************************
 *  GLOBAL DATA
 *****************************************************************************/
#if(NUM_OF_USED_PINS)
Port_ConfigType ConfigPtr[NUM_OF_USED_PINS] = {
    /*{
        Port_PinType,
        Port_PinModeType,
        Port_PinDirectionType,
        Port_PinInternalAttachType,
        Port_PinOutputCurrentType,
        Port_PinEdgeType,
        Port_PinInterruptTriggerType,
        }
     */
    {PinF2, DIO, OUTPUT, PULL_DOWN, _2MA, NO_EDGE, NO_TRIGGER},
    {PinF0, EXT_INT, INPUT, PULL_UP, NO_OUT_CURRENT, SINGLE_EDGE, LOW},
    {PinF4, EXT_INT, INPUT, PULL_UP, NO_OUT_CURRENT, SINGLE_EDGE, LOW}
};

#else
Port_ConfigType *ConfigPtr;

#endif

/******************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *****************************************************************************/


/******************************************************************************
 *  LOCAL FUNCTIONS
 *****************************************************************************/


/******************************************************************************
 *  GLOBAL FUNCTIONS
 *****************************************************************************/


/******************************************************************************
 * \syntax          : -
 * \Description     : -
 * \Sync\Async      : -
 * \Reentrancy      : -
 * \parameters (in) : -
 * \parameters (out): -
 * \Return value    : -
 *****************************************************************************/


/******************************************************************************
 *  END OF FILE:    Port_Lcfg.c
 *****************************************************************************/
