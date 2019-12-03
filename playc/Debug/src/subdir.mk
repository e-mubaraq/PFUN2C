################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/guess.cpp \
../src/perms.cpp \
../src/playStr.cpp \
../src/playc.cpp \
../src/recurse.cpp 

OBJS += \
./src/guess.o \
./src/perms.o \
./src/playStr.o \
./src/playc.o \
./src/recurse.o 

CPP_DEPS += \
./src/guess.d \
./src/perms.d \
./src/playStr.d \
./src/playc.d \
./src/recurse.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


