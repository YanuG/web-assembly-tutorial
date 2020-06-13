#include "sensor.h"

class IMU : public Sensor
{
    int _baud;

public:
    IMU(const char * name, int baud = 9600);
    void SetSettings(int baud);
};