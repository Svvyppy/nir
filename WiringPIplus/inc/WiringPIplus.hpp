#include "wiringPiI2C.h"
#include "wiringPi.h>"

struct I2C_device {
	int fd;
	int addr;

};
int I2C_Init(struct I2C_device);
int I2C_ReadReg8(struct I2C_device, int *buffer, int size);
int I2C_ReadReg16(struct I2C_device, int *buffer, int size);


