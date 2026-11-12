/**
 * @file target.h
 * @brief Hardware definition for Custom 35A 3S-6S BLDC ESC (STM32G071 + FD6288Q)
 */

#ifndef TARGET_H
#define TARGET_H

#define TARGET_NAME "CUSTOM_ESC_35A_G071"
#define MCU_STM32G071

/* System Clock */
#define SYS_CLOCK_MHZ 64

/* Gate Driver Control (TIM1 Complementary Channels) */
#define TIM1_PWM_CHANNELS 3
#define PHASE_A_HIGH_PORT GPIOA
#define PHASE_A_HIGH_PIN  GPIO_PIN_8
#define PHASE_A_LOW_PORT  GPIOB
#define PHASE_A_LOW_PIN   GPIO_PIN_13

#define PHASE_B_HIGH_PORT GPIOA
#define PHASE_B_HIGH_PIN  GPIO_PIN_9
#define PHASE_B_LOW_PORT  GPIOB
#define PHASE_B_LOW_PIN   GPIO_PIN_14

#define PHASE_C_HIGH_PORT GPIOA
#define PHASE_C_HIGH_PIN  GPIO_PIN_10
#define PHASE_C_LOW_PORT  GPIOB
#define PHASE_C_LOW_PIN   GPIO_PIN_15

/* Dead-time insertion (ns) */
#define DEAD_TIME_NS 150

/* Analog Voltage & Current Sensing */
#define CURRENT_SHUNT_MOHM    0.5f  /* 0.5 milliohm 2512 metal shunt */
#define CURRENT_AMP_GAIN      20.0f /* INA180A1 fixed 20V/V gain */
#define VBAT_DIVIDER_RATIO    0.10714f /* 1.2k / (10k + 1.2k) */

/* ADC Channel Mapping */
#define ADC_BEMF_A_CH        ADC_CHANNEL_0  /* PA0 */
#define ADC_BEMF_B_CH        ADC_CHANNEL_1  /* PA1 */
#define ADC_BEMF_C_CH        ADC_CHANNEL_2  /* PA2 */
#define ADC_VBAT_CH          ADC_CHANNEL_3  /* PA3 */
#define ADC_CURRENT_CH       ADC_CHANNEL_4  /* PA4 */
#define ADC_BEMF_NEUTRAL_CH  ADC_CHANNEL_5  /* PA5 */

/* Input Signal & Telemetry */
#define INPUT_SIGNAL_PORT    GPIOB
#define INPUT_SIGNAL_PIN     GPIO_PIN_7
#define TELEMETRY_PORT       GPIOA
#define TELEMETRY_PIN        GPIO_PIN_6
#define STATUS_LED_PORT      GPIOB
#define STATUS_LED_PIN       GPIO_PIN_0

#endif /* TARGET_H */
