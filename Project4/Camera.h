#pragma once
#include <string>
#include "Device.h"

class Camera : public Device
{
public:
	Camera(int batterylife, std::string color);
	void Show() override;
private:
	std::string _color;
};