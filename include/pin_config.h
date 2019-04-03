/*******************************************************************************
 * Inovatink
 * Copyright (c) 2019 Inovatink, All Rights Reserved.
 * 
 ******************************************************************************/
#ifndef PIN_CFG_H_
#define PIN_CFG_H_

/* Pin Definition*/
#define G                    0      // (out) green LED - should be implemented with PWM - inverse logic
#define TXD0              	 -1     // (out) UART TX
#define B                    2      // (out) blue LED - should be implemented with PWM - inverse logic
#define RXD0                 -1     // (in) UART RX
#define GSM_PWR              4      // (out) enable GSM power - direct logic short pulse to enable
#define DO1					 5		// (out) Digital OUT Pin 1
#define GSM_CTS              12     // (in) CTS - connected to modules CTS
#define GSM_RTS              13     // (out) RTS - connected to modules RTS
#define GSM_TXD              14     // (in) RX - connected to modules TXD
#define R                    15     // (out) red LED - should be implemented with PWM - inverse logic
#define DO3					 16		// (out) Digital OUT Pin 3
#define DO2				 	 17		// (out) Digital OUT Pin 2
#define DO0		     		 18     // (out) Digital OUT Pin 0
#define EN_CHG               19     // (out) enable charger - inverse logic 0 to enable (Digital IN Pin 2)
#define DI2					 -1		// disabled - (out) Digital IN Pin 2
#define CHG_STATUS           -1     // disabled - (in) charging status - inverse logic 0 for charging (Digital IN Pin 1)
#define DI1					 20		// (in) Digital IN Pin 1
#define DI0		             21     // (in) Digital IN Pin 0
#define SENSOR_SDA           -1     // disabled - GPIO
#define GPIO_OUTPUT_IO_23    -1     // disabled - GPIO
#define STS2			     25     // (out) Status Pin 2 - GPIO
#define STS1			     26     // (out) Status Pin 1 - GPIO
#define GSM_RXD              27     // (out) TX - connected to modules RXD 
#define A2				     32     // (in) Analog 2
#define A3     (ADC1_CHANNEL_5)     // (in) Analog 3 - should be initialized as ADC - GPIO33
#define V_BATT (ADC1_CHANNEL_6)     // (in) battery voltage - should be initialized as ADC GPIO34
#define A0					 -1		// disabled - (in) Analog 0 used as battery voltage
#define A1     (ADC1_CHANNEL_7)     // (in) Analog 1  - should be initialized as ADC GPIO35
#define GSM_STA              36     // (in) GSM Status Pin
#define S_VN                 39     // (in) input only pin

#define UART_SAMPLE_TXD      (22)
#define UART_SAMPLE_RXD      (23)

#define V_REF   		   1085 	// needed for ADC

#define GPIO_OUTPUT_PIN_SEL_0_TO_31  ( (1 << GSM_PWR) \
		| (1 << R) \
		| (1 << G) \
		| (1 << B) \
		| (1 << STS1) \
		| (1 << STS2))

#define GPIO_INPUT_PIN_SEL_32_TO_63 (uint64_t)( 1ULL << GSM_STA)
#endif