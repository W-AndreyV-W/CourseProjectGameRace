#include "Camel.h"

Camel::Camel(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_1, float duration_of_rest_subsequent) :Ground(distance_race, name_vehicles, speed_vehicles, driving_time) {
	_duration_of_rest_1 = duration_of_rest_1;
	_duration_of_rest_subsequent = duration_of_rest_subsequent;
}

float Camel::time() {
	if (Ground::number_of_stops() == 0) {																												//=0
		return VehiclesInitial::time();
	}
	else if (Ground::number_of_stops() == 1) {																											//=1
		return (trunc((VehiclesInitial::time() + _duration_of_rest_1) * 100) / 100);
	}
	else {
		return (trunc((VehiclesInitial::time() + _duration_of_rest_1 + (Ground::number_of_stops() - 1) * _duration_of_rest_subsequent) * 100) / 100);		//>1
	}
}

Camel::~Camel(){}