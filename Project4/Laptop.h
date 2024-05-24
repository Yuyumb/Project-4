#pragma once
#include "Device.h"
#include "Appliances.h"

class Laptop : public Device, public Appliances
{
public:
	Laptop(int batterylife, float weight);
	void Show() override;
};