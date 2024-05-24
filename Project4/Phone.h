#pragma once
#include <string>
#include "Device.h"

class Phone : public Device
{
public:
	Phone(int batterylife, std::string name);
	void Show() override;
private:
	std::string _name;
};