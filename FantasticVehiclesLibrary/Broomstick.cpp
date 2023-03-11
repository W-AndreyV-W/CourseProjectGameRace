#include "Broomstick.h"

Broomstick::Broomstick(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient) :Air(distance_race, name_vehicles, speed_vehicles, coefficient) {
}

float Broomstick::time() {
	if (VehiclesInitial::distance() / 1000 == 0) {
		return trunc(VehiclesInitial::time() * (100 - (trunc(VehiclesInitial::distance() / 1000 - 1)) * Air::coefficient()) / 100 * 100) / 100;
	}
	else {
		return trunc(VehiclesInitial::time() * (100 - (trunc(VehiclesInitial::distance() / 1000)) * Air::coefficient()) / 100 * 100) / 100;
	}
}

Broomstick::~Broomstick(){}