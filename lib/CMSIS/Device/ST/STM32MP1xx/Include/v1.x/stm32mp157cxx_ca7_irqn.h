/** @addtogroup Peripheral_interrupt_number_definition
 * @{
 */
/**
 * @brief STM32MP1XX Interrupt Number Definition, according to the selected device
 *        in @ref Library_configuration_section
 */
typedef enum IRQn {
	/******  Cortex-A Processor Specific Interrupt Numbers
	   ***************************************************************/
	/* Software Generated Interrupts */
	SGI0_IRQn = 0,	 /*!< Software Generated Interrupt  0                                      */
	SGI1_IRQn = 1,	 /*!< Software Generated Interrupt  1                                      */
	SGI2_IRQn = 2,	 /*!< Software Generated Interrupt  2                                      */
	SGI3_IRQn = 3,	 /*!< Software Generated Interrupt  3                                      */
	SGI4_IRQn = 4,	 /*!< Software Generated Interrupt  4                                      */
	SGI5_IRQn = 5,	 /*!< Software Generated Interrupt  5                                      */
	SGI6_IRQn = 6,	 /*!< Software Generated Interrupt  6                                      */
	SGI7_IRQn = 7,	 /*!< Software Generated Interrupt  7                                      */
	SGI8_IRQn = 8,	 /*!< Software Generated Interrupt  8                                      */
	SGI9_IRQn = 9,	 /*!< Software Generated Interrupt  9                                      */
	SGI10_IRQn = 10, /*!< Software Generated Interrupt 10                                      */
	SGI11_IRQn = 11, /*!< Software Generated Interrupt 11                                      */
	SGI12_IRQn = 12, /*!< Software Generated Interrupt 12                                      */
	SGI13_IRQn = 13, /*!< Software Generated Interrupt 13                                      */
	SGI14_IRQn = 14, /*!< Software Generated Interrupt 14                                      */
	SGI15_IRQn = 15, /*!< Software Generated Interrupt 15                                      */
	/* Private Peripheral Interrupts */
	VirtualMaintenanceInterrupt_IRQn = 25, /*!< Virtual Maintenance Interrupt                                        */
	HypervisorTimer_IRQn = 26,			   /*!< Hypervisor Timer Interrupt                                           */
	VirtualTimer_IRQn = 27,				   /*!< Virtual Timer Interrupt                                              */
	Legacy_nFIQ_IRQn = 28,				   /*!< Legacy nFIQ Interrupt                                                */
	SecurePhysicalTimer_IRQn = 29,		   /*!< Secure Physical Timer Interrupt                                      */
	NonSecurePhysicalTimer_IRQn = 30,	   /*!< Non-Secure Physical Timer Interrupt                                  */
	Legacy_nIRQ_IRQn = 31,				   /*!< Legacy nIRQ Interrupt                                                */
	/******  STM32 specific Interrupt Numbers
	   ****************************************************************************/
	WWDG1_IRQn = 32,			 /*!< Window WatchDog Interrupt                                            */
	PVD_AVD_IRQn = 33,			 /*!< PVD & AVD detector through EXTI                                      */
	TAMP_IRQn = 34,				 /*!< Tamper interrupts through the EXTI line                              */
	RTC_WKUP_ALARM_IRQn = 35,	 /*!< RTC Wakeup and Alarm (A & B) interrupt through the EXTI line         */
	TZC_IT_IRQn = 36,			 /*!< TrustZone DDR address space controller                               */
	RCC_IRQn = 37,				 /*!< RCC global Interrupt                                                 */
	EXTI0_IRQn = 38,			 /*!< EXTI Line0 Interrupt                                                 */
	EXTI1_IRQn = 39,			 /*!< EXTI Line1 Interrupt                                                 */
	EXTI2_IRQn = 40,			 /*!< EXTI Line2 Interrupt                                                 */
	EXTI3_IRQn = 41,			 /*!< EXTI Line3 Interrupt                                                 */
	EXTI4_IRQn = 42,			 /*!< EXTI Line4 Interrupt                                                 */
	DMA1_Stream0_IRQn = 43,		 /*!< DMA1 Stream 0 global Interrupt                                       */
	DMA1_Stream1_IRQn = 44,		 /*!< DMA1 Stream 1 global Interrupt                                       */
	DMA1_Stream2_IRQn = 45,		 /*!< DMA1 Stream 2 global Interrupt                                       */
	DMA1_Stream3_IRQn = 46,		 /*!< DMA1 Stream 3 global Interrupt                                       */
	DMA1_Stream4_IRQn = 47,		 /*!< DMA1 Stream 4 global Interrupt                                       */
	DMA1_Stream5_IRQn = 48,		 /*!< DMA1 Stream 5 global Interrupt                                       */
	DMA1_Stream6_IRQn = 49,		 /*!< DMA1 Stream 6 global Interrupt                                       */
	ADC1_IRQn = 50,				 /*!< ADC1 global Interrupts                                               */
	FDCAN1_IT0_IRQn = 51,		 /*!< FDCAN1 Interrupt line 0                                              */
	FDCAN2_IT0_IRQn = 52,		 /*!< FDCAN2 Interrupt line 0                                              */
	FDCAN1_IT1_IRQn = 53,		 /*!< FDCAN1 Interrupt line 1                                              */
	FDCAN2_IT1_IRQn = 54,		 /*!< FDCAN2 Interrupt line 1                                              */
	EXTI5_IRQn = 55,			 /*!< External Line[9:5] Interrupts                                        */
	TIM1_BRK_IRQn = 56,			 /*!< TIM1 Break interrupt                                                 */
	TIM1_UP_IRQn = 57,			 /*!< TIM1 Update Interrupt                                                */
	TIM1_TRG_COM_IRQn = 58,		 /*!< TIM1 Trigger and Commutation Interrupt                               */
	TIM1_CC_IRQn = 59,			 /*!< TIM1 Capture Compare Interrupt                                       */
	TIM2_IRQn = 60,				 /*!< TIM2 global Interrupt                                                */
	TIM3_IRQn = 61,				 /*!< TIM3 global Interrupt                                                */
	TIM4_IRQn = 62,				 /*!< TIM4 global Interrupt                                                */
	I2C1_EV_IRQn = 63,			 /*!< I2C1 Event Interrupt                                                 */
	I2C1_ER_IRQn = 64,			 /*!< I2C1 Error Interrupt                                                 */
	I2C2_EV_IRQn = 65,			 /*!< I2C2 Event Interrupt                                                 */
	I2C2_ER_IRQn = 66,			 /*!< I2C2 Error Interrupt                                                 */
	SPI1_IRQn = 67,				 /*!< SPI1 global Interrupt                                                */
	SPI2_IRQn = 68,				 /*!< SPI2 global Interrupt                                                */
	USART1_IRQn = 69,			 /*!< USART1 global Interrupt                                              */
	USART2_IRQn = 70,			 /*!< USART2 global Interrupt                                              */
	USART3_IRQn = 71,			 /*!< USART3 global Interrupt                                              */
	EXTI10_IRQn = 72,			 /*!< EXTI Line 10 Interrupts                                              */
	RTC_TIMESTAMP_IRQn = 73,	 /*!< RTC TimeStamp through EXTI Line Interrupt                            */
	EXTI11_IRQn = 74,			 /*!< EXTI Line 11 Interrupts                                              */
	TIM8_BRK_IRQn = 75,			 /*!< TIM8 Break Interrupt                                                 */
	TIM8_UP_IRQn = 76,			 /*!< TIM8 Update Interrupt                                                */
	TIM8_TRG_COM_IRQn = 77,		 /*!< TIM8 Trigger and Commutation Interrupt                               */
	TIM8_CC_IRQn = 78,			 /*!< TIM8 Capture Compare Interrupt                                       */
	DMA1_Stream7_IRQn = 79,		 /*!< DMA1 Stream7 Interrupt                                               */
	FMC_IRQn = 80,				 /*!< FMC global Interrupt                                                 */
	SDMMC1_IRQn = 81,			 /*!< SDMMC1 global Interrupt                                              */
	TIM5_IRQn = 82,				 /*!< TIM5 global Interrupt                                                */
	SPI3_IRQn = 83,				 /*!< SPI3 global Interrupt                                                */
	UART4_IRQn = 84,			 /*!< UART4 global Interrupt                                               */
	UART5_IRQn = 85,			 /*!< UART5 global Interrupt                                               */
	TIM6_IRQn = 86,				 /*!< TIM6 global                                                          */
	TIM7_IRQn = 87,				 /*!< TIM7 global interrupt                                                */
	DMA2_Stream0_IRQn = 88,		 /*!< DMA2 Stream 0 global Interrupt                                       */
	DMA2_Stream1_IRQn = 89,		 /*!< DMA2 Stream 1 global Interrupt                                       */
	DMA2_Stream2_IRQn = 90,		 /*!< DMA2 Stream 2 global Interrupt                                       */
	DMA2_Stream3_IRQn = 91,		 /*!< GPDMA2 Stream 3 global Interrupt                                     */
	DMA2_Stream4_IRQn = 92,		 /*!< GPDMA2 Stream 4 global Interrupt                                     */
	ETH1_IRQn = 93,				 /*!< Ethernet global Interrupt                                            */
	ETH1_WKUP_IRQn = 94,		 /*!< Ethernet Wakeup through EXTI line Interrupt                          */
	FDCAN_CAL_IRQn = 95,		 /*!< CAN calibration unit interrupt                                       */
	EXTI6_IRQn = 96,			 /*!< EXTI Line 6 Interrupts                                               */
	EXTI7_IRQn = 97,			 /*!< EXTI Line 7 Interrupts                                               */
	EXTI8_IRQn = 98,			 /*!< EXTI Line 8 Interrupts                                               */
	EXTI9_IRQn = 99,			 /*!< EXTI Line 9 Interrupts                                               */
	DMA2_Stream5_IRQn = 100,	 /*!< DMA2 Stream 5 global interrupt                                       */
	DMA2_Stream6_IRQn = 101,	 /*!< DMA2 Stream 6 global interrupt                                       */
	DMA2_Stream7_IRQn = 102,	 /*!< DMA2 Stream 7 global interrupt                                       */
	USART6_IRQn = 103,			 /*!< USART6 global interrupt                                              */
	I2C3_EV_IRQn = 104,			 /*!< I2C3 event interrupt                                                 */
	I2C3_ER_IRQn = 105,			 /*!< I2C3 error interrupt                                                 */
	USBH_OHCI_IRQn = 106,		 /*!< USB OHCI global interrupt                                            */
	USBH_EHCI_IRQn = 107,		 /*!< USB EHCI global interrupt                                            */
	EXTI12_IRQn = 108,			 /*!< EXTI Line 76 Interrupts                                              */
	EXTI13_IRQn = 109,			 /*!< EXTI Line 77 Interrupts                                              */
	DCMI_IRQn = 110,			 /*!< DCMI global interrupt                                                */
	CRYP1_IRQn = 111,			 /*!< CRYP crypto global interrupt                                         */
	HASH1_IRQn = 112,			 /*!< Hash global interrupt                                                */
	RESERVED_113 = 113,			 /*!< reserved                                                             */
	UART7_IRQn = 114,			 /*!< UART7 global interrupt                                               */
	UART8_IRQn = 115,			 /*!< UART8 global interrupt                                               */
	SPI4_IRQn = 116,			 /*!< SPI4 global Interrupt                                                */
	SPI5_IRQn = 117,			 /*!< SPI5 global Interrupt                                                */
	SPI6_IRQn = 118,			 /*!< SPI6 global Interrupt                                                */
	SAI1_IRQn = 119,			 /*!< SAI1 global Interrupt                                                */
	LTDC_IRQn = 120,			 /*!< LTDC global Interrupt                                                */
	LTDC_ER_IRQn = 121,			 /*!< LTDC Error global Interrupt                                          */
	ADC2_IRQn = 122,			 /*!< ADC2 global Interrupts                                               */
	SAI2_IRQn = 123,			 /*!< SAI2 global Interrupt                                                */
	QUADSPI_IRQn = 124,			 /*!< Quad SPI global interrupt                                            */
	LPTIM1_IRQn = 125,			 /*!< LP TIM1 interrupt                                                    */
	CEC_IRQn = 126,				 /*!< HDMI-CEC global Interrupt                                            */
	I2C4_EV_IRQn = 127,			 /*!< I2C4 Event Interrupt                                                 */
	I2C4_ER_IRQn = 128,			 /*!< I2C4 Error Interrupt                                                 */
	SPDIF_RX_IRQn = 129,		 /*!< SPDIF-RX global Interrupt                                            */
	OTG_IRQn = 130,				 /*!< USB On The Go global interrupt                                       */
	RESERVED_131 = 131,			 /*!< RESERVED interrupt                                                   */
	IPCC_RX0_IRQn = 132,		 /*!< IPCC RX0 Occupied interrupt (interrupt going to AIEC input as well)  */
	IPCC_TX0_IRQn = 133,		 /*!< IPCC TX0 Free interrupt (interrupt going to AIEC input as well)      */
	DMAMUX1_OVR_IRQn = 134,		 /*!< DMAMUX1 Overrun interrupt                                            */
	IPCC_RX1_IRQn = 135,		 /*!< IPCC RX1 Occupied interrupt (interrupt going to AIEC input as well)  */
	IPCC_TX1_IRQn = 136,		 /*!< IPCC TX1 Free interrupt (interrupt going to AIEC input as well)      */
	CRYP2_IRQn = 137,			 /*!< CRYP2 crypto global interrupt                                        */
	HASH2_IRQn = 138,			 /*!< Crypto Hash2 interrupt                                               */
	I2C5_EV_IRQn = 139,			 /*!< I2C5 Event Interrupt                                                 */
	I2C5_ER_IRQn = 140,			 /*!< I2C5 Error Interrupt                                                 */
	GPU_IRQn = 141,				 /*!< GPU global Interrupt                                                 */
	DFSDM1_FLT0_IRQn = 142,		 /*!< DFSDM Filter1 Interrupt                                              */
	DFSDM1_FLT1_IRQn = 143,		 /*!< DFSDM Filter2 Interrupt                                              */
	DFSDM1_FLT2_IRQn = 144,		 /*!< DFSDM Filter3 Interrupt                                              */
	DFSDM1_FLT3_IRQn = 145,		 /*!< DFSDM Filter4 Interrupt                                              */
	SAI3_IRQn = 146,			 /*!< SAI3 global Interrupt                                                */
	DFSDM1_FLT4_IRQn = 147,		 /*!< DFSDM Filter5 Interrupt                                              */
	TIM15_IRQn = 148,			 /*!< TIM15 global Interrupt                                               */
	TIM16_IRQn = 149,			 /*!< TIM16 global Interrupt                                               */
	TIM17_IRQn = 150,			 /*!< TIM17 global Interrupt                                               */
	TIM12_IRQn = 151,			 /*!< TIM12 global Interrupt                                               */
	MDIOS_IRQn = 152,			 /*!< MDIOS global Interrupt                                               */
	EXTI14_IRQn = 153,			 /*!< EXTI Line 14 Interrupts                                              */
	MDMA_IRQn = 154,			 /*!< MDMA global Interrupt                                                */
	DSI_IRQn = 155,				 /*!< DSI global Interrupt                                                 */
	SDMMC2_IRQn = 156,			 /*!< SDMMC2 global Interrupt                                              */
	HSEM_IT1_IRQn = 157,		 /*!< HSEM Semaphore Interrupt 1                                           */
	DFSDM1_FLT5_IRQn = 158,		 /*!< DFSDM Filter6 Interrupt                                              */
	EXTI15_IRQn = 159,			 /*!< EXTI Line 15 Interrupts                                              */
	MDMA_SEC_IT_IRQn = 160,		 /*!< MDMA global Secure interrupt                                         */
	SYSRESETQ_IRQn = 161,		 /*!< MCU local Reset Request                                              */
	TIM13_IRQn = 162,			 /*!< TIM13 global interrupt                                               */
	TIM14_IRQn = 163,			 /*!< TIM14 global interrupt                                               */
	DAC_IRQn = 164,				 /*!< DAC1 and DAC2 underrun error interrupts                              */
	RNG1_IRQn = 165,			 /*!< RNG1 interrupt                                                       */
	RNG2_IRQn = 166,			 /*!< RNG2 interrupt                                                       */
	I2C6_EV_IRQn = 167,			 /*!< I2C6 Event Interrupt                                                 */
	I2C6_ER_IRQn = 168,			 /*!< I2C6 Error Interrupt                                                 */
	SDMMC3_IRQn = 169,			 /*!< SDMMC3 global Interrupt                                              */
	LPTIM2_IRQn = 170,			 /*!< LP TIM2 global interrupt                                             */
	LPTIM3_IRQn = 171,			 /*!< LP TIM3 global interrupt                                             */
	LPTIM4_IRQn = 172,			 /*!< LP TIM4 global interrupt                                             */
	LPTIM5_IRQn = 173,			 /*!< LP TIM5 global interrupt                                             */
	ETH1_LPI_IRQn = 174,		 /*!< ETH1_LPI interrupt (LPI: lpi_intr_o)                                 */
	WWDG1_RST = 175,			 /*!< Window Watchdog 1 Reset through AIEC                                 */
	MCU_SEV_IRQn = 176,			 /*!< MCU Send Event  interrupt                                            */
	RCC_WAKEUP_IRQn = 177,		 /*!< RCC Wake up interrupt                                                */
	SAI4_IRQn = 178,			 /*!< SAI4 global interrupt                                                */
	DTS_IRQn = 179,				 /*!< Temperature sensor Global Interrupt                                  */
	RESERVED_180 = 180,			 /*!< reserved                                                             */
	WAKEUP_PIN_IRQn = 181,		 /*!< Interrupt for all 6 wake-up pins                                     */
	IWDG1_IRQn = 182,			 /*!< IWDG1 Early Interrupt                                                */
	IWDG2_IRQn = 183,			 /*!< IWDG2 Early Interrupt                                                */
	TAMP_SERR_S_IRQn = 229,		 /*!< TAMP Tamper and Security Error Secure interrupts                     */
	RTC_WKUP_ALARM_S_IRQn = 230, /*!< RTC Wakeup Timer and Alarms (A and B) Secure interrupt               */
	RTC_TS_SERR_S_IRQn = 231,	 /*!< RTC TimeStamp and Security Error Secure interrupt                    */
	MAX_IRQ_n,
	Force_IRQn_enum_size =
		1048 /* Dummy entry to ensure IRQn_Type is more than 8 bits. Otherwise GIC init loop would fail */
} IRQn_Type;

/**
 * @}
 */
