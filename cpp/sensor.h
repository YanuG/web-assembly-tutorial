#include <iostream>
using namespace std;

class Sensor {

    private:
        const char * _name;

    public: 
        Sensor(const char* name);
        void Start();
        void Stop();
        const char * GetName();
};
