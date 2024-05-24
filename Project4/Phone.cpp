#include "Phone.h"
#include <iostream>

Phone::Phone(int batterylife, std::string name) : Device(batterylife), _name(name)
{

}
void Phone::Show()
{
	std::cout << "Phone " << _name << " has batterylife: " << _batterylife << std::endl;
}