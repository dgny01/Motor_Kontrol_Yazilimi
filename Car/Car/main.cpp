#include <iostream>
using namespace std;
#include "car.h"

int main()
{
	Cars myCar;
	myCar.set_brand("Tesla");

	myCar.show_dashboard();      // Motor kapal�

	myCar.start_engine();        // Motoru �al��t�r
	myCar.accelerate(70);        // H�zlan
	myCar.brake(20);             // Yava�la
	myCar.show_dashboard();      // G�sterge

	myCar.stop_engine();         // Motoru durdur
	myCar.show_dashboard();      // G�sterge (motor kapal�, h�z s�f�r)

	return 0;
}




