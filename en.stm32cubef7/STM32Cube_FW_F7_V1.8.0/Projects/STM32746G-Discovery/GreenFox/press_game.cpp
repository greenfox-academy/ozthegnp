/**
 ******************************************************************************
 * @file    Templates/Src/main.c
 * @author  MCD Application Team
 * @version V1.0.3
 * @date    22-April-2016
 * @brief   STM32F7xx HAL API Template project
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <ctime>
#include <time.h>
#include <iostream>

/** @addtogroup STM32F7xx_HAL_Examples
 * @{
 */

/** @addtogroup Templates
 * @{
 */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

/* Private functions ---------------------------------------------------------*/

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
int main(void)
{

 /* This project template calls firstly two functions in order to configure MPU feature
    and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
    These functions are provided as template implementation that User may integrate
    in his application, to enhance the performance in case of use of AXI interface
    with several masters. */

 /* Configure the MPU attributes as Write Through */
 MPU_Config();

 /* Enable the CPU Cache */
 CPU_CACHE_Enable();

 /* STM32F7xx HAL library initialization:
      - Configure the Flash ART accelerator on ITCM interface
      - Configure the Systick to generate an interrupt each 1 msec
      - Set NVIC Group Priority to 4
      - Low Level Initialization
    */
 HAL_Init();

 /* Configure the System clock to have a frequency of 216 MHz */
 SystemClock_Config();


 /* Add your application code here     */
 __HAL_RCC_GPIOA_CLK_ENABLE();    // we need to enable the GPIOA port's clock first
 __HAL_RCC_GPIOF_CLK_ENABLE();    // we need to enable the GPIOF port's clock first
 __HAL_RCC_GPIOC_CLK_ENABLE();    // we need to enable the GPIOF port's clock first
 __HAL_RCC_GPIOG_CLK_ENABLE();    // we need to enable the GPIOF port's clock first
 __HAL_RCC_GPIOB_CLK_ENABLE();    // we need to enable the GPIOF port's clock first
 __HAL_RCC_GPIOI_CLK_ENABLE();    // we need to enable the GPIOF port's clock first
 __HAL_RCC_GPIOH_CLK_ENABLE();    // we need to enable the GPIOF port's clock first

 GPIO_InitTypeDef tda0;            // create a config structure
 tda0.Pin = GPIO_PIN_0;            // this is about PIN 0
 tda0.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda0.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda0.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOA, &tda0);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda1;            // create a config structure
 tda1.Pin = GPIO_PIN_10;            // this is about PIN 0
 tda1.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enable
 tda1.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda1.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOF, &tda1);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda2;            // create a config structure
 tda2.Pin = GPIO_PIN_9;            // this is about PIN 0
 tda2.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda2.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda2.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOF, &tda2);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda3;            // create a config structur
 tda3.Pin = GPIO_PIN_8;            // this is about PIN
 tda3.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda3.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda3.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOF, &tda3);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda4;            // create a config structur
 tda4.Pin = GPIO_PIN_7;            // this is about PIN
 tda4.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda4.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda4.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOF, &tda4);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda5;            // create a config structur
 tda5.Pin = GPIO_PIN_6;            // this is about PIN
 tda5.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda5.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda5.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOF, &tda5);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda6;            // create a config structur
 tda6.Pin = GPIO_PIN_7;            // this is about PIN
 tda6.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda6.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda6.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOC, &tda6);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda7;            // create a config structur
 tda7.Pin = GPIO_PIN_6;            // this is about PIN
 tda7.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda7.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda7.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOC, &tda7);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda8;            // create a config structur
 tda8.Pin = GPIO_PIN_6;            // this is about PIN
 tda8.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda8.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda8.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOG, &tda8);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda9;            // create a config structur
 tda9.Pin = GPIO_PIN_4;            // this is about PIN
 tda9.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda9.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda9.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOB, &tda9);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda10;            // create a config structur
 tda10.Pin = GPIO_PIN_7;            // this is about PIN
 tda10.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda10.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda10.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOG, &tda10);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda11;            // create a config structur
 tda11.Pin = GPIO_PIN_6;            // this is about PIN
 tda11.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
 tda11.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
 tda11.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output
 HAL_GPIO_Init(GPIOH, &tda11);      // initialize the pin on GPIOA port with HAL

 GPIO_InitTypeDef tda12;            // create a config structur
 tda12.Pin = GPIO_PIN_0;            // this is about PIN
 tda12.Mode = GPIO_MODE_INPUT;  // Configure as output with push-up-down enabled
 tda12.Pull = GPIO_PULLUP;       // the push-up-down should work as pulldown
 tda12.Speed = GPIO_SPEED_LOW;     // we need a high-speed output
 HAL_GPIO_Init(GPIOI, &tda12);      // initialize the pin on GPIOA port with HAL*/

 GPIO_InitTypeDef tda13;            // create a config structur
 tda13.Pin = GPIO_PIN_3;            // this is about PIN
 tda13.Mode = GPIO_MODE_INPUT;  // Configure as output with push-up-down enabled
 tda13.Pull = GPIO_PULLUP;       // the push-up-down should work as pulldown
 tda13.Speed = GPIO_SPEED_LOW;     // we need a high-speed output
 HAL_GPIO_Init(GPIOI, &tda13);      // initialize the pin on GPIOA port with HAL*/

 BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

 struct light_struct{
   GPIO_InitTypeDef a;
   GPIO_TypeDef* b;
 };

 struct light_struct light0 = {tda2, GPIOF}; // plaing Port and PIN # in structs
 struct light_struct light1 = {tda1, GPIOF};
 struct light_struct light2 = {tda3, GPIOF};
 struct light_struct light3 = {tda0, GPIOA};
 struct light_struct light4 = {tda4, GPIOF};
 struct light_struct light5 = {tda5, GPIOF};
 struct light_struct light6 = {tda6, GPIOC};
 struct light_struct light7 = {tda7, GPIOC};
 struct light_struct light8 = {tda8, GPIOG};
 struct light_struct light9 = {tda9, GPIOB};
 struct light_struct light10 ={tda10, GPIOG};
 struct light_struct light11 = {tda11, GPIOH};

 struct light_struct light_array[12]= { // filling struct in array
	light0,
	light1,
	light2,
	light3,
	light4,
	light5,
	light6,
	light7,
	light8,
	light9,
	light10,
	light11 };


 while (1)
 {


	 int delay = 100;
	 /* if(HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_0) == 0){
		for(int i = 0; i < 12; ++i) {
		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_SET);  // setting the pin to 1
		   HAL_Delay(delay);
		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_RESET);   // setting the pin to 1
		   delay += 7;
		  HAL_GPIO_WritePin(light_array[6].b, light_array[6].a.Pin, GPIO_PIN_SET);  // setting the pin to 1

		}

		for(int i = 11; i > -1; --i){
		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_SET);  // setting the pin to 1
		   HAL_Delay(delay);
		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_RESET);   // setting the pin to 1
		   delay -= 7;
		  HAL_GPIO_WritePin(light_array[6].b, light_array[6].a.Pin, GPIO_PIN_SET);  // setting the pin to 1

		}
	  } else{
		for(int i = 11; i > -1; --i) {
		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_SET);  // setting the pin to 1
		   HAL_Delay(delay);
		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_RESET);   // setting the pin to 1
		   HAL_Delay(delay);

		}
	  }*/

	 for(int i = 11; i > -1; --i) {
		 if(i == 5 && HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_0) == 0){
			 for(int i = 11; i > -1; --i) {
			 		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_SET);  // setting the pin to 1

			 		}
		 }
		 if(i != 5 && HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_0) == 0){
		 			for(int i = 11; i > -1; --i) {
		 			 		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_RESET);  // setting the pin to 1

		 			}
		 }
	 		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_SET);  // setting the pin to 1
	 		   HAL_Delay(delay);
	 		   HAL_GPIO_WritePin(light_array[i].b, light_array[i].a.Pin, GPIO_PIN_RESET);   // setting the pin to 1
	 		   HAL_Delay(delay);
	 }

 }


}

/**
 * @brief  System Clock Configuration
 *         The system Clock is configured as follow :
 *            System Clock source            = PLL (HSE)
 *            SYSCLK(Hz)                     = 216000000
 *            HCLK(Hz)                       = 216000000
 *            AHB Prescaler                  = 1
 *            APB1 Prescaler                 = 4
 *            APB2 Prescaler                 = 2
 *            HSE Frequency(Hz)              = 25000000
 *            PLL_M                          = 25
 *            PLL_N                          = 432
 *            PLL_P                          = 2
 *            PLL_Q                          = 9
 *            VDD(V)                         = 3.3
 *            Main regulator output voltage  = Scale1 mode
 *            Flash Latency(WS)              = 7
 * @param  None
 * @retval None
 */
static void SystemClock_Config(void)
{
 RCC_ClkInitTypeDef RCC_ClkInitStruct;
 RCC_OscInitTypeDef RCC_OscInitStruct;

 /* Enable HSE Oscillator and activate PLL with HSE as source */
 RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
 RCC_OscInitStruct.HSEState = RCC_HSE_ON;
 RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
 RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
 RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
 RCC_OscInitStruct.PLL.PLLM = 25;
 RCC_OscInitStruct.PLL.PLLN = 432;
 RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
 RCC_OscInitStruct.PLL.PLLQ = 9;
 if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
 {
   Error_Handler();
 }

 /* activate the OverDrive to reach the 216 Mhz Frequency */
 if(HAL_PWREx_EnableOverDrive() != HAL_OK)
 {
   Error_Handler();
 }

 /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
    clocks dividers */
 RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
 RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
 RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
 RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
 RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
 if(HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
 {
   Error_Handler();
 }
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void)
{
 /* User may add here some code to deal with this error */
 while(1)
 {
 }
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void)
{
 MPU_Region_InitTypeDef MPU_InitStruct;

 /* Disable the MPU */
 HAL_MPU_Disable();

 /* Configure the MPU attributes as WT for SRAM */
 MPU_InitStruct.Enable = MPU_REGION_ENABLE;
 MPU_InitStruct.BaseAddress = 0x20010000;
 MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
 MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
 MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
 MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
 MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
 MPU_InitStruct.Number = MPU_REGION_NUMBER0;
 MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
 MPU_InitStruct.SubRegionDisable = 0x00;
 MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

 HAL_MPU_ConfigRegion(&MPU_InitStruct);

 /* Enable the MPU */
 HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void)
{
 /* Enable I-Cache */
 SCB_EnableICache();

 /* Enable D-Cache */
 SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
 /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

 /* Infinite loop */
 while (1)
 {
 }
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
