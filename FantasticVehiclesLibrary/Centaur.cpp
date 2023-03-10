#include "Centaur.h"

Centaur::Centaur(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_subsequent) :Ground(distance_race, name_vehicles, speed_vehicles, driving_time) {
	_duration_of_rest_subsequent = duration_of_rest_subsequent;
}

float Centaur::time() {
	if (Ground::number_of_stops() == 0) {																					//=0
		return VehiclesInitial::time();
	}
	else {
		return trunc((VehiclesInitial::time() + _duration_of_rest_subsequent * Ground::number_of_stops()) * 100) /100;		//>1
	}
}

Centaur::~Centaur(){}