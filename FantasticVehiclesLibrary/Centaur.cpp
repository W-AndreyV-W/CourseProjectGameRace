#include "Centaur.h"

Centaur::Centaur(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_subsequent) :Ground(distance_race, name_vehicles, speed_vehicles, driving_time, duration_of_rest_subsequent) {
}

float Centaur::time() {
	if (trunc(Ground::number_of_stops()) == 0) {																	//	=0
		return VehiclesInitial::time();
	}
	else {																									//	>1
		float duration_of_rest_subsequent_ = 0;
		if (Ground::number_of_stops() > trunc(Ground::number_of_stops())) {
			duration_of_rest_subsequent_ = trunc(Ground::number_of_stops()) * Ground::duration_of_rest_subsequent();
		}
		else {
			duration_of_rest_subsequent_ = (trunc(Ground::number_of_stops()) - 1) * Ground::duration_of_rest_subsequent();
		}
		return trunc((VehiclesInitial::time() + duration_of_rest_subsequent_) * 100) /100;		
	}
}

Centaur::~Centaur(){}