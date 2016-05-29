// The list of external handlers is from the ARM assembly startup files.

// ----------------------------------------------------------------------------

#include "cortexm/ExceptionHandlers.h"

/*******************************************************************************
*
* External declarations for the interrupt handlers used by the application.
*
******************************************************************************/
extern SysTickIntHandler(void);
extern UARTStdioIntHandler(void);

void UART0_IRQHandler(void)
{
  UARTStdioIntHandler();
}
void PendSV_Handler(void){

}
void SVC_Handler(void)
{

}
void SysTick_Handler(void)
{
  SysTickIntHandler();
}

