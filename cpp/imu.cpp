#include "imu.h"

IMU::IMU(const char * name, int baud): Sensor(name), _baud(baud) {} 

void IMU::SetSettings(int baud)
{
    _baud = baud;
    printf("Setting %s to baud rate of %i\n" , GetName() , _baud);
}

