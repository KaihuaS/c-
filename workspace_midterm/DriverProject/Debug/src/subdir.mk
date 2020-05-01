################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbstractItem.cpp \
../src/AbstractStore.cpp \
../src/AppleEmployee.cpp \
../src/AppleStore.cpp \
../src/DriverProject.cpp \
../src/Employee.cpp \
../src/IPhone.cpp \
../src/Item.cpp \
../src/Person.cpp \
../src/Store.cpp 

OBJS += \
./src/AbstractItem.o \
./src/AbstractStore.o \
./src/AppleEmployee.o \
./src/AppleStore.o \
./src/DriverProject.o \
./src/Employee.o \
./src/IPhone.o \
./src/Item.o \
./src/Person.o \
./src/Store.o 

CPP_DEPS += \
./src/AbstractItem.d \
./src/AbstractStore.d \
./src/AppleEmployee.d \
./src/AppleStore.d \
./src/DriverProject.d \
./src/Employee.d \
./src/IPhone.d \
./src/Item.d \
./src/Person.d \
./src/Store.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


