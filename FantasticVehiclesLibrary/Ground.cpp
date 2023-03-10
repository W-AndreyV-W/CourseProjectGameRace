#include "Ground.h"

float Ground::number_of_stops() {
	return VehiclesInitial::time() / _driving_time;
}

float Ground::duration_of_rest_subsequent() {
	return _duration_of_rest_subsequent;
}

Ground::Ground(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_subsequent) :VehiclesInitial(distance_race, name_vehicles, speed_vehicles) {
	_driving_time = driving_time;
	_duration_of_rest_subsequent = duration_of_rest_subsequent;
}

Ground::~ Ground(){}