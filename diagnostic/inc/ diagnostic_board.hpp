#include <stdio.h>
#include <string.h>
#include <errno.h>

#include <wiringPi.h>
#include <wiringSerial.h>

typedef struct  
{
    int PWM_1;
    int PWM_2;
    int voltage_1;
    int voltage_2;
    int current_1;
    int current_2;
    int Vbat_1;
    int Vbat_2;


}diagnostic_board;

/// @brief 
void get_diagnostic(int fd, struct *diagnostic_board);

