################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/GearerCommands/CollectGear.cpp \
../src/Commands/GearerCommands/CollectGearwithRollerRunning.cpp \
../src/Commands/GearerCommands/MoveGearerAuto.cpp \
../src/Commands/GearerCommands/RetractGearer.cpp \
../src/Commands/GearerCommands/RetractGearerReal.cpp \
../src/Commands/GearerCommands/ScoreGear.cpp \
../src/Commands/GearerCommands/SecureGear.cpp \
../src/Commands/GearerCommands/UnsecureAndScoreGear.cpp \
../src/Commands/GearerCommands/UnsecureGear.cpp 

OBJS += \
./src/Commands/GearerCommands/CollectGear.o \
./src/Commands/GearerCommands/CollectGearwithRollerRunning.o \
./src/Commands/GearerCommands/MoveGearerAuto.o \
./src/Commands/GearerCommands/RetractGearer.o \
./src/Commands/GearerCommands/RetractGearerReal.o \
./src/Commands/GearerCommands/ScoreGear.o \
./src/Commands/GearerCommands/SecureGear.o \
./src/Commands/GearerCommands/UnsecureAndScoreGear.o \
./src/Commands/GearerCommands/UnsecureGear.o 

CPP_DEPS += \
./src/Commands/GearerCommands/CollectGear.d \
./src/Commands/GearerCommands/CollectGearwithRollerRunning.d \
./src/Commands/GearerCommands/MoveGearerAuto.d \
./src/Commands/GearerCommands/RetractGearer.d \
./src/Commands/GearerCommands/RetractGearerReal.d \
./src/Commands/GearerCommands/ScoreGear.d \
./src/Commands/GearerCommands/SecureGear.d \
./src/Commands/GearerCommands/UnsecureAndScoreGear.d \
./src/Commands/GearerCommands/UnsecureGear.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/GearerCommands/%.o: ../src/Commands/GearerCommands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Apex5803\Desktop\WORKSPACE/HailStorm/src" -IC:\Users\Apex5803/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-5.0 -I/usr/include/sdformat-2.3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


