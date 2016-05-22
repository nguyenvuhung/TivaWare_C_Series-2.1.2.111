// The list of external handlers is from the ARM assembly startup files.

// ----------------------------------------------------------------------------

#include "cortexm/ExceptionHandlers.h"

/*******************************************************************************
*
* External declarations for the interrupt handlers used by the application.
*
******************************************************************************/

extern void xPortPendSVHandler(void);
extern void vPortSVCHandler(void);
extern void xPortSysTickHandler(void);
//void UART0_IRQHandler(void)
//{
////  UARTStdioIntHandler();
//}
void PendSV_Handler(void){
  xPortPendSVHandler();
}
void SVC_Handler(void)
{
  vPortSVCHandler();
}
void SysTick_Handler(void)
{
  xPortSysTickHandler();
}

