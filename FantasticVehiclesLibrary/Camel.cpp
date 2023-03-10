#include "Camel.h"

Camel::Camel(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_1, float duration_of_rest_subsequent) :Ground(distance_race, name_vehicles, speed_vehicles, driving_time, duration_of_rest_subsequent) {
	_duration_of_rest_1 = duration_of_rest_1;
}

float Camel::time() {
	if (Ground::number_of_stops() <= 1) {																													//	=0
		return VehiclesInitial::time();
	}
	else if (Ground::number_of_stops() <= 2) {																												//	=1

		return (trunc((VehiclesInitial::time() + _duration_of_rest_1) * 100) / 100);
	}
	else {																																					//	>1
		float duration_of_rest_subsequent_ = 0;
		if (Ground::number_of_stops() > trunc(Ground::number_of_stops())) {
			duration_of_rest_subsequent_ =  (trunc(Ground::number_of_stops()) - 1) * Ground::duration_of_rest_subsequent();
		}
		else {
			duration_of_rest_subsequent_ =  (trunc(Ground::number_of_stops()) - 2) * Ground::duration_of_rest_subsequent();
		}
		return (trunc(VehiclesInitial::time() + _duration_of_rest_1 + duration_of_rest_subsequent_) * 100) / 100;
	}
}

Camel::~Camel(){}