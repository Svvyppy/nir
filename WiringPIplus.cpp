#include"WiringPIplus.hpp"


int I2C_Init(struct I2C_device){
    I2C_device.fd = wiringPiI2CSetup(I2C_device.address);
     if (fd == -1) {
         std::cout << "Failed to init I2C communication.\n";
            return -1;
        }
        std::cout << "I2C communication successfully setup.\n";
 
    return I2C_device.fd = wiringPiI2CSetup(I2C_device.address);
}

int I2C_ReadReg8(struct I2C_device, int reg, int8_t *buffer, int size){
    
    for(int i=0; i<size+1;i++){
        buffer[i]=wiringPiI2CReadReg8(I2C_device.fd,reg-i);
    }


return *buffer;
}

int I2C_ReadReg16(struct I2C_device, int reg, int16_t *buffer, int size){
    
    for(int i=0; i<size+1;i++){
        buffer[i]=wiringPiI2CReadReg16(I2C_device.fd,reg-i);
    }


return *buffer;
}

