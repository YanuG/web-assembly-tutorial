#include "sensor.h"

Sensor::Sensor(const char * name): _name(name) 
{
    printf("Created an %s\n" , _name);
}


void Sensor::Start()
{
    printf("I have started collecting data for %s\n" , _name);
}


void Sensor::Stop()
{
    printf("I have stopped collecting data for %s\n" , _name);
}

const char * Sensor::GetName() 
{
    return _name;
}
