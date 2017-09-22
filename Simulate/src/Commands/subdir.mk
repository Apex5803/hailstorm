################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Commands/Climb.cpp \
../src/Commands/DriveWithEncoder.cpp \
../src/Commands/FeederIn.cpp \
../src/Commands/FeederOut.cpp \
../src/Commands/MoveBallCollector.cpp \
../src/Commands/MoveFeeder.cpp \
../src/Commands/MoveIntakeIn.cpp \
../src/Commands/MoveMagiKarpet.cpp \
../src/Commands/MoveMagiKarpetIn.cpp \
../src/Commands/MoveShooter.cpp \
../src/Commands/MoveShooterAuto.cpp \
../src/Commands/ReverseTenBallAuto.cpp \
../src/Commands/TankDrive.cpp 

OBJS += \
./src/Commands/Climb.o \
./src/Commands/DriveWithEncoder.o \
./src/Commands/FeederIn.o \
./src/Commands/FeederOut.o \
./src/Commands/MoveBallCollector.o \
./src/Commands/MoveFeeder.o \
./src/Commands/MoveIntakeIn.o \
./src/Commands/MoveMagiKarpet.o \
./src/Commands/MoveMagiKarpetIn.o \
./src/Commands/MoveShooter.o \
./src/Commands/MoveShooterAuto.o \
./src/Commands/ReverseTenBallAuto.o \
./src/Commands/TankDrive.o 

CPP_DEPS += \
./src/Commands/Climb.d \
./src/Commands/DriveWithEncoder.d \
./src/Commands/FeederIn.d \
./src/Commands/FeederOut.d \
./src/Commands/MoveBallCollector.d \
./src/Commands/MoveFeeder.d \
./src/Commands/MoveIntakeIn.d \
./src/Commands/MoveMagiKarpet.d \
./src/Commands/MoveMagiKarpetIn.d \
./src/Commands/MoveShooter.d \
./src/Commands/MoveShooterAuto.d \
./src/Commands/ReverseTenBallAuto.d \
./src/Commands/TankDrive.d 


# Each subdirectory must supply rules for building sources it contributes
src/Commands/%.o: ../src/Commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\Apex5803\Desktop\WORKSPACE/HailStorm/src" -IC:\Users\Apex5803/wpilib/cpp/current/sim/include -I/usr/include -I/usr/include/gazebo-5.0 -I/usr/include/sdformat-2.3 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


