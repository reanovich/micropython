/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_STM32U5XX_HAL_CONF_BASE_H
#define MICROPY_INCLUDED_STM32U5XX_HAL_CONF_BASE_H

#define HAL_MODULE_ENABLED

#define HAL_ADC_MODULE_ENABLED
#define HAL_MDF_MODULE_ENABLED
#define HAL_COMP_MODULE_ENABLED
#define HAL_CORDIC_MODULE_ENABLED
#define HAL_CRC_MODULE_ENABLED
#define HAL_CRYP_MODULE_ENABLED
#define HAL_DAC_MODULE_ENABLED
#define HAL_DMA2D_MODULE_ENABLED
#define HAL_DSI_MODULE_ENABLED
#define HAL_FDCAN_MODULE_ENABLED
#define HAL_FMAC_MODULE_ENABLED
#define HAL_GFXMMU_MODULE_ENABLED
#define HAL_GPU2D_MODULE_ENABLED
#define HAL_GTZC_MODULE_ENABLED
#define HAL_HASH_MODULE_ENABLED
#define HAL_HRTIM_MODULE_ENABLED
#define HAL_IRDA_MODULE_ENABLED
#define HAL_IWDG_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_I2S_MODULE_ENABLED
#define HAL_LPTIM_MODULE_ENABLED
#define HAL_LTDC_MODULE_ENABLED
#define HAL_NAND_MODULE_ENABLED
#define HAL_NOR_MODULE_ENABLED
#define HAL_OPAMP_MODULE_ENABLED
#define HAL_OSPI_MODULE_ENABLED
#define HAL_OTFDEC_MODULE_ENABLED
#define HAL_PKA_MODULE_ENABLED
#define HAL_QSPI_MODULE_ENABLED
#define HAL_RNG_MODULE_ENABLED
#define HAL_RTC_MODULE_ENABLED
#define HAL_SAI_MODULE_ENABLED
#define HAL_CRYP_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED
#define HAL_MMC_MODULE_ENABLED
#define HAL_SMARTCARD_MODULE_ENABLED
#define HAL_SMBUS_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_SRAM_MODULE_ENABLED
#define HAL_TIM_MODULE_ENABLED
#define HAL_TSC_MODULE_ENABLED
#define HAL_RAMCFG_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_USART_MODULE_ENABLED
#define HAL_WWDG_MODULE_ENABLED
#define HAL_DCMI_MODULE_ENABLED
#define HAL_PSSI_MODULE_ENABLED
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_PCD_MODULE_ENABLED
#define HAL_HCD_MODULE_ENABLED
#define HAL_XSPI_MODULE_ENABLED

#define HAL_GPIO_MODULE_ENABLED
#define HAL_EXTI_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED

// Oscillator values in Hz
#define HSI_VALUE   (16000000)
#define HSI48_VALUE (48000000)
#define LSI_VALUE   (32000)
#define MSI_VALUE   (4000000)

// SysTick has the highest priority
#define TICK_INT_PRIORITY (0x00)

// Miscellaneous HAL settings
#define VDD_VALUE                   3300
#define PREFETCH_ENABLE             1
#define USE_SPI_CRC                 0
#define USE_RTOS                    0

// Include various HAL modules for convenience
#ifdef HAL_RCC_MODULE_ENABLED
  #include "stm32u5xx_hal_rcc.h"
#endif /* HAL_RCC_MODULE_ENABLED */

#ifdef HAL_GPIO_MODULE_ENABLED
  #include "stm32u5xx_hal_gpio.h"
#endif /* HAL_GPIO_MODULE_ENABLED */

#ifdef HAL_ICACHE_MODULE_ENABLED
  #include "stm32u5xx_hal_icache.h"
#endif /* HAL_ICACHE_MODULE_ENABLED */

#ifdef HAL_DCACHE_MODULE_ENABLED
  #include "stm32u5xx_hal_dcache.h"
#endif /* HAL_DCACHE_MODULE_ENABLED */

#ifdef HAL_GTZC_MODULE_ENABLED
  #include "stm32u5xx_hal_gtzc.h"
#endif /* HAL_GTZC_MODULE_ENABLED */

#ifdef HAL_DMA_MODULE_ENABLED
  #include "stm32u5xx_hal_dma.h"
#endif /* HAL_DMA_MODULE_ENABLED */

#ifdef HAL_DMA2D_MODULE_ENABLED
  #include "stm32u5xx_hal_dma2d.h"
#endif /* HAL_DMA2D_MODULE_ENABLED */

#ifdef HAL_DSI_MODULE_ENABLED
#include "stm32u5xx_hal_dsi.h"
#endif /* HAL_DSI_MODULE_ENABLED */

#ifdef HAL_CORTEX_MODULE_ENABLED
  #include "stm32u5xx_hal_cortex.h"
#endif /* HAL_CORTEX_MODULE_ENABLED */

#ifdef HAL_PKA_MODULE_ENABLED
  #include "stm32u5xx_hal_pka.h"
#endif /* HAL_PKA_MODULE_ENABLED */

#ifdef HAL_ADC_MODULE_ENABLED
  #include "stm32u5xx_hal_adc.h"
#endif /* HAL_ADC_MODULE_ENABLED */

#ifdef HAL_COMP_MODULE_ENABLED
  #include "stm32u5xx_hal_comp.h"
#endif /* HAL_COMP_MODULE_ENABLED */

#ifdef HAL_CRC_MODULE_ENABLED
  #include "stm32u5xx_hal_crc.h"
#endif /* HAL_CRC_MODULE_ENABLED */

#ifdef HAL_CRYP_MODULE_ENABLED
  #include "stm32u5xx_hal_cryp.h"
#endif /* HAL_CRYP_MODULE_ENABLED */

#ifdef HAL_DAC_MODULE_ENABLED
  #include "stm32u5xx_hal_dac.h"
#endif /* HAL_DAC_MODULE_ENABLED */

#ifdef HAL_FLASH_MODULE_ENABLED
  #include "stm32u5xx_hal_flash.h"
#endif /* HAL_FLASH_MODULE_ENABLED */

#ifdef HAL_HASH_MODULE_ENABLED
  #include "stm32u5xx_hal_hash.h"
#endif /* HAL_HASH_MODULE_ENABLED */

#ifdef HAL_SRAM_MODULE_ENABLED
  #include "stm32u5xx_hal_sram.h"
#endif /* HAL_SRAM_MODULE_ENABLED */

#ifdef HAL_MMC_MODULE_ENABLED
 #include "stm32u5xx_hal_mmc.h"
#endif /* HAL_MMC_MODULE_ENABLED */

#ifdef HAL_NOR_MODULE_ENABLED
  #include "stm32u5xx_hal_nor.h"
#endif /* HAL_NOR_MODULE_ENABLED */

#ifdef HAL_NAND_MODULE_ENABLED
  #include "stm32u5xx_hal_nand.h"
#endif /* HAL_NAND_MODULE_ENABLED */

#ifdef HAL_I2C_MODULE_ENABLED
 #include "stm32u5xx_hal_i2c.h"
#endif /* HAL_I2C_MODULE_ENABLED */

#ifdef HAL_IWDG_MODULE_ENABLED
 #include "stm32u5xx_hal_iwdg.h"
#endif /* HAL_IWDG_MODULE_ENABLED */

#ifdef HAL_LPTIM_MODULE_ENABLED
#include "stm32u5xx_hal_lptim.h"
#endif /* HAL_LPTIM_MODULE_ENABLED */

#ifdef HAL_LTDC_MODULE_ENABLED
#include "stm32u5xx_hal_ltdc.h"
#endif /* HAL_LTDC_MODULE_ENABLED */

#ifdef HAL_OPAMP_MODULE_ENABLED
#include "stm32u5xx_hal_opamp.h"
#endif /* HAL_OPAMP_MODULE_ENABLED */

#ifdef HAL_PWR_MODULE_ENABLED
 #include "stm32u5xx_hal_pwr.h"
#endif /* HAL_PWR_MODULE_ENABLED */

#ifdef HAL_OSPI_MODULE_ENABLED
 #include "stm32u5xx_hal_ospi.h"
#endif /* HAL_OSPI_MODULE_ENABLED */

#ifdef HAL_RNG_MODULE_ENABLED
 #include "stm32u5xx_hal_rng.h"
#endif /* HAL_RNG_MODULE_ENABLED */

#ifdef HAL_RTC_MODULE_ENABLED
 #include "stm32u5xx_hal_rtc.h"
#endif /* HAL_RTC_MODULE_ENABLED */

#ifdef HAL_SAI_MODULE_ENABLED
 #include "stm32u5xx_hal_sai.h"
#endif /* HAL_SAI_MODULE_ENABLED */

#ifdef HAL_SD_MODULE_ENABLED
 #include "stm32u5xx_hal_sd.h"
#endif /* HAL_SD_MODULE_ENABLED */

#ifdef HAL_SMBUS_MODULE_ENABLED
 #include "stm32u5xx_hal_smbus.h"
#endif /* HAL_SMBUS_MODULE_ENABLED */

#ifdef HAL_SPI_MODULE_ENABLED
 #include "stm32u5xx_hal_spi.h"
#endif /* HAL_SPI_MODULE_ENABLED */

#ifdef HAL_TIM_MODULE_ENABLED
 #include "stm32u5xx_hal_tim.h"
#endif /* HAL_TIM_MODULE_ENABLED */

#ifdef HAL_TSC_MODULE_ENABLED
 #include "stm32u5xx_hal_tsc.h"
#endif /* HAL_TSC_MODULE_ENABLED */

#ifdef HAL_UART_MODULE_ENABLED
 #include "stm32u5xx_hal_uart.h"
#endif /* HAL_UART_MODULE_ENABLED */

#ifdef HAL_USART_MODULE_ENABLED
 #include "stm32u5xx_hal_usart.h"
#endif /* HAL_USART_MODULE_ENABLED */

#ifdef HAL_IRDA_MODULE_ENABLED
 #include "stm32u5xx_hal_irda.h"
#endif /* HAL_IRDA_MODULE_ENABLED */

#ifdef HAL_SMARTCARD_MODULE_ENABLED
 #include "stm32u5xx_hal_smartcard.h"
#endif /* HAL_SMARTCARD_MODULE_ENABLED */

#ifdef HAL_WWDG_MODULE_ENABLED
 #include "stm32u5xx_hal_wwdg.h"
#endif /* HAL_WWDG_MODULE_ENABLED */

#ifdef HAL_PCD_MODULE_ENABLED
 #include "stm32u5xx_hal_pcd.h"
#endif /* HAL_PCD_MODULE_ENABLED */

#ifdef HAL_HCD_MODULE_ENABLED
 #include "stm32u5xx_hal_hcd.h"
#endif /* HAL_HCD_MODULE_ENABLED */

#ifdef HAL_CORDIC_MODULE_ENABLED
 #include "stm32u5xx_hal_cordic.h"
#endif /* HAL_CORDIC_MODULE_ENABLED */

#ifdef HAL_DCMI_MODULE_ENABLED
 #include "stm32u5xx_hal_dcmi.h"
#endif /* HAL_DCMI_MODULE_ENABLED */

#ifdef HAL_EXTI_MODULE_ENABLED
 #include "stm32u5xx_hal_exti.h"
#endif /* HAL_EXTI_MODULE_ENABLED */

#ifdef HAL_FDCAN_MODULE_ENABLED
 #include "stm32u5xx_hal_fdcan.h"
#endif /* HAL_FDCAN_MODULE_ENABLED */

#ifdef HAL_FMAC_MODULE_ENABLED
 #include "stm32u5xx_hal_fmac.h"
#endif /* HAL_FMAC_MODULE_ENABLED */

#ifdef HAL_GFXMMU_MODULE_ENABLED
  #include "stm32u5xx_hal_gfxmmu.h"
#endif /* HAL_GFXMMU_MODULE_ENABLED */

#ifdef HAL_GPU2D_MODULE_ENABLED
  #include "stm32u5xx_hal_gpu2d.h"
#endif /* HAL_GPU2D_MODULE_ENABLED */

#ifdef HAL_OTFDEC_MODULE_ENABLED
 #include "stm32u5xx_hal_otfdec.h"
#endif /* HAL_OTFDEC_MODULE_ENABLED */

#ifdef HAL_PSSI_MODULE_ENABLED
 #include "stm32u5xx_hal_pssi.h"
#endif /* HAL_PSSI_MODULE_ENABLED */

#ifdef HAL_RAMCFG_MODULE_ENABLED
 #include "stm32u5xx_hal_ramcfg.h"
#endif /* HAL_RAMCFG_MODULE_ENABLED */

#ifdef HAL_MDF_MODULE_ENABLED
 #include "stm32u5xx_hal_mdf.h"
#endif /* HAL_MDF_MODULE_ENABLED */

#ifdef HAL_XSPI_MODULE_ENABLED
 #include "stm32u5xx_hal_xspi.h"
#endif /* HAL_XSPI_MODULE_ENABLED */

#include "stm32u5xx_ll_adc.h"
#include "stm32u5xx_ll_rtc.h"
#include "stm32u5xx_ll_rcc.h"
#include "stm32u5xx_ll_usart.h"
#include "stm32u5xx_ll_usb.h"
#include "stm32u5xx_ll_lpuart.h"
#include "stm32u5xx_ll_pwr.h"

// HAL parameter assertions are disabled
#define assert_param(expr) ((void)0)

#endif // MICROPY_INCLUDED_STM32U5XX_HAL_CONF_BASE_H
