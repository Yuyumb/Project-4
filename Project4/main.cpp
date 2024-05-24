#include <iostream>
#include <string>
#include "IElectronis.h"
#include "Device.h"
#include "Appliances.h"
#include "Laptop.h"
#include "Phone.h"
#include "Camera.h"
#include "Television.h"
#include "Microwave.h"


using namespace std;

int main()
{
	IElectronis* product[5];

	product[0] = new Phone(5, "Samsung");
	product[1] = new Camera(3, "Black");
	product[2] = new Microwave(6.2, "White");
	product[3] = new Television(5.4, "Io");
	product[4] = new Laptop(4, 3.3);

	bool open = true;
	while (open)
	{
		cout << "Select product : 1 - Phone, 2 - Camera, 3 - Microwave, 4 - Television, 5 - Laptop, 0 - to leave" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			product[0]->Show();
			break;
		case 2:
			product[1]->Show();
			break;
		case 3:
			product[2]->Show();
			break;
		case 4:
			product[3]->Show();
			break;
		case 5:
			product[4]->Show();
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "Select product from 1 to 5 or 0 to exit" << endl;
			break;
		}
	}
	delete product[0];
	delete product[1];
	delete product[2];
	delete product[3];
	delete product[4];

	return 0;
}