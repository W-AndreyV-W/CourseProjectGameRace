#include "Ground.h"

float Ground::number_of_stops() {
	return trunc(VehiclesInitial::distance() / _driving_time);
}

Ground::Ground(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time) :VehiclesInitial(distance_race, name_vehicles, speed_vehicles) {
	_driving_time = driving_time;
}

Ground::~ Ground(){}