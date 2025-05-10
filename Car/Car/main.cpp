#include <iostream>
using namespace std;
#include "car.h"

int main()
{
	Cars myCar;
	myCar.set_brand("Tesla");

	myCar.show_dashboard();      // Motor kapalý

	myCar.start_engine();        // Motoru çalýþtýr
	myCar.accelerate(70);        // Hýzlan
	myCar.brake(20);             // Yavaþla
	myCar.show_dashboard();      // Gösterge

	myCar.stop_engine();         // Motoru durdur
	myCar.show_dashboard();      // Gösterge (motor kapalý, hýz sýfýr)

	return 0;
}




