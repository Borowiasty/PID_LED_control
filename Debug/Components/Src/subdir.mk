################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Components/Src/bh_1750.c \
../Components/Src/bh_1750_config.c 

OBJS += \
./Components/Src/bh_1750.o \
./Components/Src/bh_1750_config.o 

C_DEPS += \
./Components/Src/bh_1750.d \
./Components/Src/bh_1750_config.d 


# Each subdirectory must supply rules for building sources it contributes
Components/Src/%.o Components/Src/%.su: ../Components/Src/%.c Components/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I"D:/Program Files (x86)/Programy/Github/PID_LED_control/Components/Inc" -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/ARM_CMSIS/CMSIS/Core/Include/ -I../Middlewares/Third_Party/ARM_CMSIS/CMSIS/Core_A/Include/ -I../Middlewares/Third_Party/ARM_CMSIS/CMSIS/DSP/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Components-2f-Src

clean-Components-2f-Src:
	-$(RM) ./Components/Src/bh_1750.d ./Components/Src/bh_1750.o ./Components/Src/bh_1750.su ./Components/Src/bh_1750_config.d ./Components/Src/bh_1750_config.o ./Components/Src/bh_1750_config.su

.PHONY: clean-Components-2f-Src

