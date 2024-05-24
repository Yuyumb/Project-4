#pragma once
#include <string>
#include "Appliances.h"

class Microwave : public Appliances
{
public:
	Microwave(float weight, std::string color);
	void Show() override;
private:
	std::string _color;
};