################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/SW4STM32/startup_stm32f469xx.s 

C_SRCS += \
C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/SW4STM32/syscalls.c 

OBJS += \
./Application/SW4STM32/startup_stm32f469xx.o \
./Application/SW4STM32/syscalls.o 

C_DEPS += \
./Application/SW4STM32/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
Application/SW4STM32/startup_stm32f469xx.o: C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/SW4STM32/startup_stm32f469xx.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo $(PWD)
	arm-none-eabi-as -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/SW4STM32/syscalls.o: C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/SW4STM32/syscalls.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F469xx '-DUSE_BPP=16' -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Core/Inc" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/TouchGFX/target" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/TouchGFX/generated/fonts/include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/TouchGFX/generated/texts/include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/TouchGFX/generated/images/include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/TouchGFX/generated/gui_generated/include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/TouchGFX/gui/include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Middlewares/ST/TouchGFX/touchgfx/framework/include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/BSP/Components/exc7200" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/BSP/Components/stmpe811" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/BSP/Components/ts3510" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/BSP/Components/otm8009a" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/BSP/Components/ampire480272" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/BSP/Components/Common" -I"C:/GitHub_Projekte/glr-2019c-display-steering-wheel/STM32F469_TouchGFX_v2/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


