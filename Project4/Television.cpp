#include "Television.h"
#include <iostream>

Television::Television(float weight, std::string brand) : Appliances(weight), _brand(brand)
{

}
void Television::Show()
{
	std::cout << "Television " << _brand << " weighs " << _weight << std::endl;
}