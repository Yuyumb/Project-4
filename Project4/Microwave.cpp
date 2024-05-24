#include "Microwave.h"
#include <iostream>

Microwave::Microwave(float weight, std::string color) : Appliances(weight), _color(color)
{

}
void Microwave::Show()
{
	std::cout << _color << " Microwave weighs: " << _weight << std::endl;
}