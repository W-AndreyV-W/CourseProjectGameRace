#include "Broomstick.h"

Broomstick::Broomstick(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient) :Air(distance_race, name_vehicles, speed_vehicles) {
	_coefficient = coefficient;
}

float Broomstick::time() {
	return trunc((VehiclesInitial::time() * (100 + VehiclesInitial::distance()/1000 * _coefficient)/100) * 100) / 100;
}

Broomstick::~Broomstick(){}