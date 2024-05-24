#pragma once
#include "IElectronis.h"

class Device : virtual public IElectronis
{
public:
	Device(int batterylife);
	void Show() override;
protected:
	int _batterylife;
};