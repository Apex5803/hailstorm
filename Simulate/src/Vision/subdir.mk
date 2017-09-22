################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Vision/VisionProcessing.cpp 

OBJS += \
./src/Vision/VisionProcessing.o 

CPP_DEPS += \
./src/Vision/VisionProcessing.d 


# Each subdirectory must supply rules for building sources it contributes
src/Vision/%.o: ../src/Vision/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Apex5803\Desktop\WORKSPACE/HailStorm/src" -IC:\Users\Apex5803/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-5.0 -I/usr/include/sdformat-2.3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


