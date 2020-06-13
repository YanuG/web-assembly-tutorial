#include "imu.h"
#include <emscripten/emscripten.h>

#ifdef __cplusplus 
extern "C" {
#endif

IMU *imu;

void EMSCRIPTEN_KEEPALIVE imuJS()
{
    imu = new IMU("IMU");
}


void EMSCRIPTEN_KEEPALIVE setBaudRate(int baud)
{
    imu->SetSettings(baud);
}


void EMSCRIPTEN_KEEPALIVE startIMU()
{
    imu->Start();
}

void EMSCRIPTEN_KEEPALIVE stopIMU()
{
    imu->Stop();
}

}
