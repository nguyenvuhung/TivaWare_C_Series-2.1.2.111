//
// Copyright (c) 2015 Liviu Ionescu.
// This file was automatically generated by the xPacks scripts.
//

// The list of external handlers is from the ARM assembly startup files.

// ----------------------------------------------------------------------------

#include "cortexm/ExceptionHandlers.h"

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

// Forward declaration of the specific IRQ handlers. These are aliased
// to the Default_Handler, which is a 'forever' loop. When the application
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions

void __attribute__ ((weak, alias ("Default_Handler")))
GPIOA_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOB_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOD_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOE_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SSI0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM_Fault_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Quadrature_Encoder0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
WWDG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer0_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer0_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer1_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer1_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer2_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer2_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Analog_Comparator0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Analog_Comparator1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Analog_Comparator2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
System_Control_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_Control_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOF_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOH_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SSI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer3_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer3_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Quadrature_Encoder1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CAN1_IRQHandler(void);
// Reserved
// Reserved
void __attribute__ ((weak, alias ("Default_Handler")))
Hibernate_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USB0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
uDMA_Software_Transfer_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
uDMA_Error_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_Sequence_0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_Sequence_1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_Sequence_2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC1_Sequence_3_IRQHandler(void);
// Reserved
// Reserved
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOJ_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOK_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOL_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SSI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SSI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART7_IRQHandler(void);
// Reserved
// Reserved
// Reserved
// Reserved
void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer4_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer4_B_IRQHandler(void);
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
// Reserved
void __attribute__ ((weak, alias ("Default_Handler")))
Timer5_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Timer5_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer0_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer0_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer1_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer1_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer2_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer2_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer3_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer3_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer4_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer4_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer5_A_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Wide_Timer5_B_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FPU_IRQHandler(void);
// Reserved
// Reserved
void __attribute__ ((weak, alias ("Default_Handler")))
I2C4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOM_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPION_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Quadrature_Encoder2_IRQHandler(void);
// Reserved
// Reserved
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_P7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIO_Q7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOR_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
GPIOS_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM1_Generator0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM1_Generator1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM1_Generator2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM1_Generator3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PWM1_Fault_IRQHandler(void);

// ----------------------------------------------------------------------------

extern unsigned int _estack;

typedef void
(* const pHandler)(void);

// ----------------------------------------------------------------------------

// The table of interrupt handlers. It has an explicit section name
// and relies on the linker script to place it at the correct location
// in memory.

__attribute__ ((section(".isr_vector"),used))
pHandler __isr_vectors[] =
  {
    // Cortex-M Core Handlers
    (pHandler) &_estack,               // The initial stack pointer
    Reset_Handler,                     // The reset handler

    NMI_Handler,                       // The NMI handler
    HardFault_Handler,                 // The hard fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    MemManage_Handler,                 // The MPU fault handler
    BusFault_Handler,                  // The bus fault handler
    UsageFault_Handler,                // The usage fault handler
#else
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
#endif
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    SVC_Handler,                       // SVCall handler
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    DebugMon_Handler,                  // Debug monitor handler
#else
    0,                                 // Reserved
#endif
    0,                                 // Reserved
    PendSV_Handler,                    // The PendSV handler
    SysTick_Handler,                   // The SysTick handler

    // ----------------------------------------------------------------------
    // External Interrupts
	GPIOA_IRQHandler,                   // GPIO Port A
	GPIOB_IRQHandler,                    // GPIO Port B
	GPIOC_IRQHandler,             // GPIO Port C
	GPIOD_IRQHandler,               // GPIO Port D
	GPIOE_IRQHandler,                  // GPIO Port E
	UART0_IRQHandler,                    // UART0 Rx and Tx
	UART1_IRQHandler,                  // UART1 Rx and Tx
	SSI0_IRQHandler,                  // SSI0 Rx and Tx
	I2C0_IRQHandler,                  // I2C0 Master and Slave
	PWM_Fault_IRQHandler,                  // PWM Fault
	PWM0_IRQHandler,                  // PWM Generator 0
	PWM1_IRQHandler,           // PWM Generator 1
	PWM2_IRQHandler,           // PWM Generator 2
	Quadrature_Encoder0_IRQHandler,           // Quadrature Encoder 0
	ADC0_IRQHandler,           // ADC Sequence 0
	ADC1_IRQHandler,           // ADC Sequence 1
	ADC2_IRQHandler,           // ADC Sequence 2
	ADC3_IRQHandler,           // ADC Sequence 3
	ADC0_IRQHandler,                    // Watchdog timer
	Timer0_A_IRQHandler,                // Timer 0 subtimer A
	Timer0_B_IRQHandler,               // Timer 0 subtimer B
	Timer1_A_IRQHandler,               // Timer 1 subtimer A
	Timer1_B_IRQHandler,               // Timer 1 subtimer B
	Timer2_A_IRQHandler,                // Timer 2 subtimer A
	Timer2_B_IRQHandler,          // Timer 2 subtimer B
	Analog_Comparator0_IRQHandler,          // Analog Comparator 0
	Analog_Comparator1_IRQHandler,     // Analog Comparator 1
	Analog_Comparator2_IRQHandler,                // Analog Comparator 2
	System_Control_IRQHandler,                   // System Control (PLL, OSC, BO)
	FLASH_Control_IRQHandler,                   // FLASH Control
	GPIOF_IRQHandler,                   // GPIO Port F
	GPIOG_IRQHandler,                // GPIO Port G
	GPIOH_IRQHandler,                // GPIO Port H
	UART2_IRQHandler,                // UART2 Rx and Tx
	SSI1_IRQHandler,                // SSI1 Rx and Tx
	Timer3_A_IRQHandler,                   // Timer 3 subtimer A
	Timer3_B_IRQHandler,                   // Timer 3 subtimer B
	I2C1_IRQHandler,                 // I2C1 Master and Slave
	Quadrature_Encoder1_IRQHandler,                 // Quadrature Encoder 1
	CAN0_IRQHandler,                 // CAN0
	CAN1_IRQHandler,              // CAN1
    0,              // Reserved
    0,            // Reserved
	Hibernate_IRQHandler,         // Hibernate
	USB0_IRQHandler,          // USB0
	PWM3_IRQHandler,     // PWM Generator 3
	uDMA_Software_Transfer_IRQHandler,                // uDMA Software Transfer
	uDMA_Error_IRQHandler,           // uDMA Error
	ADC1_Sequence_0_IRQHandler,                    // ADC1 Sequence 0
	ADC1_Sequence_1_IRQHandler,                   // ADC1 Sequence 1
	ADC1_Sequence_2_IRQHandler,                   // ADC1 Sequence 2
	ADC1_Sequence_3_IRQHandler,                   // ADC1 Sequence 3
    0,                  // Reserved
    0,                  // Reserved
	GPIOJ_IRQHandler,               // GPIO Port J
	GPIOK_IRQHandler,                   // GPIO Port K
	GPIOL_IRQHandler,           // GPIO Port L
	SSI2_IRQHandler,           // SSI2 Rx and Tx
	SSI3_IRQHandler,           // SSI3 Rx and Tx
	UART3_IRQHandler,           // UART3 Rx and Tx
	UART4_IRQHandler,           // UART4 Rx and Tx
	UART5_IRQHandler,                    // UART5 Rx and Tx
	UART6_IRQHandler,               // UART6 Rx and Tx
	UART7_IRQHandler,                // UART7 Rx and Tx
    0,               // Reserved
    0,               // Reserved
    0,               // Reserved
    0,                 // Reserved
	I2C2_IRQHandler,           // I2C2 Master and Slave
	I2C3_IRQHandler,           // I2C3 Master and Slave
	Timer4_A_IRQHandler,           // Timer 4 subtimer A
	Timer4_B_IRQHandler,                 // Timer 4 subtimer B
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    Timer5_A_IRQHandler,                      // Timer 5 subtimer A
    Timer5_B_IRQHandler,                      // Timer 5 subtimer B
    Wide_Timer0_A_IRQHandler,                      // Wide Timer 0 subtimer A
    Wide_Timer0_B_IRQHandler,                      // Wide Timer 0 subtimer B
    Wide_Timer1_A_IRQHandler,                      // Wide Timer 1 subtimer A
    Wide_Timer1_B_IRQHandler,                      // Wide Timer 1 subtimer B
    Wide_Timer2_A_IRQHandler,                      // Wide Timer 2 subtimer A
    Wide_Timer2_B_IRQHandler,                      // Wide Timer 2 subtimer B
    Wide_Timer3_A_IRQHandler,                      // Wide Timer 3 subtimer A
    Wide_Timer3_B_IRQHandler,                      // Wide Timer 3 subtimer B
    Wide_Timer4_A_IRQHandler,                      // Wide Timer 4 subtimer A
    Wide_Timer4_B_IRQHandler,                      // Wide Timer 4 subtimer B
    Wide_Timer5_A_IRQHandler,                      // Wide Timer 5 subtimer A
    Wide_Timer5_B_IRQHandler,                      // Wide Timer 5 subtimer B
    FPU_IRQHandler,                      // FPU
    0,                                      // Reserved
    0,                                      // Reserved
    I2C4_IRQHandler,                      // I2C4 Master and Slave
    I2C5_IRQHandler,                      // I2C5 Master and Slave
    GPIOM_IRQHandler,                      // GPIO Port M
    GPION_IRQHandler,                      // GPIO Port N
    Quadrature_Encoder2_IRQHandler,                      // Quadrature Encoder 2
    0,                                      // Reserved
    0,                                      // Reserved
    GPIO_P0_IRQHandler,                      // GPIO Port P (Summary or P0)
    GPIO_P1_IRQHandler,                      // GPIO Port P1
    GPIO_P2_IRQHandler,                      // GPIO Port P2
    GPIO_P3_IRQHandler,                      // GPIO Port P3
    GPIO_P4_IRQHandler,                      // GPIO Port P4
    GPIO_P5_IRQHandler,                      // GPIO Port P5
    GPIO_P6_IRQHandler,                      // GPIO Port P6
    GPIO_P7_IRQHandler,                      // GPIO Port P7
    GPIO_Q0_IRQHandler,                      // GPIO Port Q (Summary or Q0)
    GPIO_Q1_IRQHandler,                      // GPIO Port Q1
    GPIO_Q2_IRQHandler,                      // GPIO Port Q2
    GPIO_Q3_IRQHandler,                      // GPIO Port Q3
    GPIO_Q4_IRQHandler,                      // GPIO Port Q4
    GPIO_Q5_IRQHandler,                      // GPIO Port Q5
    GPIO_Q6_IRQHandler,                      // GPIO Port Q6
    GPIO_Q7_IRQHandler,                      // GPIO Port Q7
    GPIOR_IRQHandler,                      // GPIO Port R
    GPIOS_IRQHandler,                      // GPIO Port S
    PWM1_Generator0_IRQHandler,                      // PWM 1 Generator 0
    PWM1_Generator1_IRQHandler,                      // PWM 1 Generator 1
    PWM1_Generator2_IRQHandler,                      // PWM 1 Generator 2
    PWM1_Generator3_IRQHandler,                      // PWM 1 Generator 3
    PWM1_Fault_IRQHandler                       // PWM 1 Fault
};

// ----------------------------------------------------------------------------

// Processor ends up here if an unexpected interrupt occurs or a
// specific handler is not present in the application code.
// When in DEBUG, trigger a debug exception to clearly notify
// the user of the exception and help identify the cause.

void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
#if defined(DEBUG)
__DEBUG_BKPT();
#endif
while (1)
  {
  }
}

// ----------------------------------------------------------------------------
