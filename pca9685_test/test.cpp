#include "pca9685/src/pca9685.h"

int main(int argc, char **argv)
{
    wiringPiSetup();
    int fd = pca9685Setup(PIN_BASE, 0x40, HERTZ);
	if (fd < 0)
	{
		printf("Error in setup\n");
		return fd;
	}
    pca9685PWMReset(fd);

}