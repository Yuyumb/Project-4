#include "Appliances.h"
#include <iostream>

Appliances::Appliances(float weight) : _weight(weight)
{

}
void Appliances::Show()
{
	std::cout << "Appliances weight: " << _weight << std::endl;
}