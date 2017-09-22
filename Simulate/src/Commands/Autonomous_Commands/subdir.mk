################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/Autonomous_Commands/AutoTurnTest.cpp \
../src/Commands/Autonomous_Commands/DriveDistance.cpp \
../src/Commands/Autonomous_Commands/DriveForwardAutoDeadReckoning.cpp \
../src/Commands/Autonomous_Commands/DriveForwardEncoders.cpp \
../src/Commands/Autonomous_Commands/EncoderGearAuto.cpp \
../src/Commands/Autonomous_Commands/GearAndBallsBlue.cpp \
../src/Commands/Autonomous_Commands/GearAndBallsRed.cpp \
../src/Commands/Autonomous_Commands/OneGearAuto.cpp \
../src/Commands/Autonomous_Commands/RotateRobot.cpp \
../src/Commands/Autonomous_Commands/TenBallAuto.cpp \
../src/Commands/Autonomous_Commands/TurnGyro.cpp 

OBJS += \
./src/Commands/Autonomous_Commands/AutoTurnTest.o \
./src/Commands/Autonomous_Commands/DriveDistance.o \
./src/Commands/Autonomous_Commands/DriveForwardAutoDeadReckoning.o \
./src/Commands/Autonomous_Commands/DriveForwardEncoders.o \
./src/Commands/Autonomous_Commands/EncoderGearAuto.o \
./src/Commands/Autonomous_Commands/GearAndBallsBlue.o \
./src/Commands/Autonomous_Commands/GearAndBallsRed.o \
./src/Commands/Autonomous_Commands/OneGearAuto.o \
./src/Commands/Autonomous_Commands/RotateRobot.o \
./src/Commands/Autonomous_Commands/TenBallAuto.o \
./src/Commands/Autonomous_Commands/TurnGyro.o 

CPP_DEPS += \
./src/Commands/Autonomous_Commands/AutoTurnTest.d \
./src/Commands/Autonomous_Commands/DriveDistance.d \
./src/Commands/Autonomous_Commands/DriveForwardAutoDeadReckoning.d \
./src/Commands/Autonomous_Commands/DriveForwardEncoders.d \
./src/Commands/Autonomous_Commands/EncoderGearAuto.d \
./src/Commands/Autonomous_Commands/GearAndBallsBlue.d \
./src/Commands/Autonomous_Commands/GearAndBallsRed.d \
./src/Commands/Autonomous_Commands/OneGearAuto.d \
./src/Commands/Autonomous_Commands/RotateRobot.d \
./src/Commands/Autonomous_Commands/TenBallAuto.d \
./src/Commands/Autonomous_Commands/TurnGyro.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/Autonomous_Commands/%.o: ../src/Commands/Autonomous_Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Apex5803\Desktop\WORKSPACE/HailStorm/src" -IC:\Users\Apex5803/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-5.0 -I/usr/include/sdformat-2.3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


