################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Custom/AxisTrigger.cpp \
../src/Custom/MultiSpeedController.cpp \
../src/Custom/POVTrigger.cpp \
../src/Custom/UserSettings.cpp 

OBJS += \
./src/Custom/AxisTrigger.o \
./src/Custom/MultiSpeedController.o \
./src/Custom/POVTrigger.o \
./src/Custom/UserSettings.o 

CPP_DEPS += \
./src/Custom/AxisTrigger.d \
./src/Custom/MultiSpeedController.d \
./src/Custom/POVTrigger.d \
./src/Custom/UserSettings.d 


# Each subdirectory must supply rules for building sources it contributes
src/Custom/%.o: ../src/Custom/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Apex5803\Desktop\WORKSPACE/HailStorm/src" -IC:\Users\Apex5803/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-5.0 -I/usr/include/sdformat-2.3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


