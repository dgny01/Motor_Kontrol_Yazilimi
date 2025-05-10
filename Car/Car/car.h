//car.h
#pragma once

#include "iostream"
using namespace std;

class Cars {
private:
	string brand;
	int speed;
	bool engine_on;
	const int max_speed = 300;

public:

	Cars() {
		speed = 0;
		engine_on = false;
	}

	// marka getter
	string get_brand() const {
		return brand;
	}
	// marka setter
	void set_brand(const string& new_brand) {
		brand = new_brand;
	}
	// hýz getter
	int get_speed() const {
		return speed;
	}
	void set_speed(const int& new_speed) {
		if (new_speed >= 0 && new_speed <= max_speed)
			speed = new_speed;
	}

	void start_engine() {
		engine_on = true;
		cout << "Motor calisti..." << endl;
	}

	void stop_engine() {
		engine_on = false;
		speed = 0;
		cout << "Motor durdu..." << endl;
	}

	bool is_engine_on() const {
		return engine_on;
	}

	void accelerate(int amount) {
		if (engine_on) {
			speed += amount;
			if (speed > max_speed)
				speed = max_speed;
		}
		else {
			cout << "Motor calismiyor! Hizlanamazsin..." << endl;
		}
	}

	void brake(int amount) {
		if (engine_on)
		{
			speed -= amount;
			if (speed < 0)
				speed = 0;
		}
		else {
			cout << "Motor kapali! Fren yapmaya gerek yok..." << endl;
		}
	}

	void show_dashboard() const {
		cout << "Marka: " << brand << endl;
		cout << "Motor: " << (engine_on ? "Acik" : "Kapali") << endl;
		cout << "Hiz: " << speed << "km/h" << endl;
	}
};#pragma once
