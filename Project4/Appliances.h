#pragma once
#include "IElectronis.h"

class Appliances : virtual public IElectronis
{
public:
	Appliances(float weight);
	void Show() override;
protected:
	float _weight;
};