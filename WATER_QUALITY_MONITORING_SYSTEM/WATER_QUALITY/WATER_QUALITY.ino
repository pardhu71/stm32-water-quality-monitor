#include "main.h"
#include <stdio.h>

ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;
I2C_HandleTypeDef hi2c1;

uint16_t adc_buffer[3];  // pH, TDS, DO

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_ADC1_Init(void);
static void MX_I2C1_Init(void);

int main(void)
{
  HAL_Init();
  SystemClock_Config();

  MX_GPIO_Init();
  MX_DMA_Init();
  MX_ADC1_Init();
  MX_I2C1_Init();

  // Start ADC with DMA
  HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buffer, 3);

  while (1)
  {
    float ph  = adc_buffer[0] * (3.3 / 4095.0);
    float tds = adc_buffer[1] * (3.3 / 4095.0);
    float dox = adc_buffer[2] * (3.3 / 4095.0);

    // Replace with OLED display function
    printf("pH: %.2f TDS: %.2f DO: %.2f\n", ph, tds, dox);

    HAL_Delay(100); // ~10Hz
  }
}