#pragma once
#include <string>
#include "Appliances.h"

class Television : public Appliances
{
public:
	Television(float weight, std::string brand);
	void Show() override;
private:
	std::string _brand;
};