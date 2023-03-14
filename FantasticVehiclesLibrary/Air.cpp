#include "Air.h"

float Air::coefficient() {
	return _coefficient;
}

Air::Air(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient) :VehiclesInitial(distance_race, name_vehicles, speed_vehicles, 2) {
	_coefficient = coefficient;
}

Air::~Air(){}