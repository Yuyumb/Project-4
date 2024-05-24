#include "Device.h"
#include <iostream>

using namespace std;

Device::Device(int batterylife) : _batterylife(batterylife)
{

}
void Device::Show()
{
	cout << "Device batterylife: " << _batterylife << endl;
}
