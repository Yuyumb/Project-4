#include "Laptop.h"
#include <iostream>

using namespace std;

Laptop::Laptop(int batterylife, float weight) : Device(batterylife), Appliances(weight)
{

}
void Laptop::Show()
{
	cout << "Laptop weights " << _weight << " and has battery life: " << _batterylife  << endl;
}