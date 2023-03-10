#include "CamelFast.h"

CamelFast::CamelFast(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_1, float duration_of_rest_2, float duration_of_rest_subsequent) :Ground(distance_race, name_vehicles, speed_vehicles, driving_time) {
	_duration_of_rest_1 = duration_of_rest_1;
	_duration_of_rest_2 = duration_of_rest_2;
	_duration_of_rest_subsequent = duration_of_rest_subsequent;
}

float CamelFast::time() {
	if (Ground::number_of_stops() == 0) {																																		//=0
		return VehiclesInitial::time();
	}
	else if (Ground::number_of_stops() == 1) {																																	//=1
		return trunc((VehiclesInitial::time() + _duration_of_rest_1) * 100) / 100;
	}
	else if (Ground::number_of_stops() == 2) {																																	//=2
		return trunc((VehiclesInitial::time() + _duration_of_rest_1 + _duration_of_rest_2) * 100) / 100;
	}
	else {
		return trunc((VehiclesInitial::time() + _duration_of_rest_1 + _duration_of_rest_2 + _duration_of_rest_subsequent * (Ground::number_of_stops() - 2)) * 100) / 100;		//>2
	}
}

CamelFast::~CamelFast(){}