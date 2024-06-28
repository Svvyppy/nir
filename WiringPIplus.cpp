#include"WiringPIplus.hpp"


int I2C_Init(struct I2C_device){
    return I2C_device.fd = wiringPiI2CSetup(I2C_device.address);
}

int I2C_Read(struct I2C_device, int buffer, int size){

}