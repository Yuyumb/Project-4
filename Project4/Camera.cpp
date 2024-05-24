#include "Camera.h"
#include <iostream>

Camera::Camera(int batterylife, std::string color) : Device(batterylife), _color(color)
{

}
void Camera::Show()
{
	std::cout << _color << " Camera has battery life: " << _batterylife << std::endl;
}