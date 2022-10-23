/*******************************************************************************
 *  FILE DESCRIPTION
 *  --------------------------------------------------------------------------*/
/**         \file   main.c
 *         \brief   main application
 *         
 *       \details   -
 ******************************************************************************/

/*******************************************************************************
 *  INCLUDES
 ******************************************************************************/
#include "Led_Control.h"

/*******************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 ******************************************************************************/
#define ONTIME			1000u
#define OFFTIME			500u

/*******************************************************************************
 *  LOCAL DATA
 ******************************************************************************/


/*******************************************************************************
 *  GLOBAL DATA
 ******************************************************************************/


/*******************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 ******************************************************************************/
void Init(void);

/*******************************************************************************
 *  LOCAL FUNCTIONS
 ******************************************************************************/
void Init(void){
	IntCtrl_Init();
	Port_Init();
}

/*******************************************************************************
 *  GLOBAL FUNCTIONS
 ******************************************************************************/


/*******************************************************************************
 * \syntax          : int main(void)
 * \Description     : main function
 * \Sync\Async      : Sync
 * \Reentrancy      : Non-Reentrant
 * \parameters (in) : None
 * \parameters (out): None
 * \Return value    : None
 ******************************************************************************/
int main(){
	Init();
	
	Led_Control(ONTIME, OFFTIME);
	
    while(1){

    }

    return 0;
}

/*******************************************************************************
 *  END OF FILE:    main.c
 ******************************************************************************/
