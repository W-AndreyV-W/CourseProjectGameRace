#include "Eagle.h"

Eagle::Eagle(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient) :Air(distance_race, name_vehicles, speed_vehicles, coefficient) {
}

float Eagle::time() {
	return trunc(VehiclesInitial::time() * ((100 - Air::coefficient())/100) * 100) / 100;
}

Eagle::~Eagle(){}