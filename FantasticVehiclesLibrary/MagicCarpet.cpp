#include "MagicCarpet.h"

MagicCarpet::MagicCarpet(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient_1000, float coefficient_5000, float coefficient_10000, float coefficient) :Air(distance_race, name_vehicles, speed_vehicles) {
	_coefficient_1000 = coefficient_1000;
	_coefficient_5000 = coefficient_5000;
	_coefficient_10000 = coefficient_10000;
	_coefficient = coefficient;
}

float MagicCarpet::time() {
	if (VehiclesInitial::distance() < 1000) {
		return trunc(VehiclesInitial::time() * ((100 - _coefficient_1000)/100) * 100) / 100;
	}
	else if (VehiclesInitial::distance() < 5000) {
		return trunc(VehiclesInitial::time() * ((100 - _coefficient_5000)/100) * 100) / 100;
	}
	else if (VehiclesInitial::distance() < 10000) {
		return trunc(VehiclesInitial::time() * ((100 - _coefficient_10000)/100) * 100) / 100;
	}
	else {
		return trunc(VehiclesInitial::time() * ((100 - _coefficient)/100) * 100) / 100;
	}
}

MagicCarpet::~MagicCarpet() {}