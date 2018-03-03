################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../FINAL\ GAME/FINAL\ GAME/FINAL\ GAME.cpp \
../FINAL\ GAME/FINAL\ GAME/stdafx.cpp 

OBJS += \
./FINAL\ GAME/FINAL\ GAME/FINAL\ GAME.o \
./FINAL\ GAME/FINAL\ GAME/stdafx.o 

CPP_DEPS += \
./FINAL\ GAME/FINAL\ GAME/FINAL\ GAME.d \
./FINAL\ GAME/FINAL\ GAME/stdafx.d 


# Each subdirectory must supply rules for building sources it contributes
FINAL\ GAME/FINAL\ GAME/FINAL\ GAME.o: ../FINAL\ GAME/FINAL\ GAME/FINAL\ GAME.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"FINAL GAME/FINAL GAME/FINAL GAME.d" -MT"FINAL\ GAME/FINAL\ GAME/FINAL\ GAME.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

FINAL\ GAME/FINAL\ GAME/stdafx.o: ../FINAL\ GAME/FINAL\ GAME/stdafx.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"FINAL GAME/FINAL GAME/stdafx.d" -MT"FINAL\ GAME/FINAL\ GAME/stdafx.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


