#include "VehiclesInitial.h"

std::string VehiclesInitial::name() {
	return _name_vehicles;
}

float VehiclesInitial::time() {
	return trunc(_distance_race / _speed_vehicles * 100) / 100;
}

float VehiclesInitial::distance() {
	return _distance_race;
}

int VehiclesInitial::type_of_vehicles() {
	return _type_of_vehicles;
}

bool VehiclesInitial::in_game() {
	return _in_game;
}

void VehiclesInitial::in_game_in(bool in_game) {
	_in_game = in_game;
}

VehiclesInitial::VehiclesInitial(float distance_race, std::string name_vehicles, float speed_vehicles, int type_of_vehicles) {
	_distance_race = distance_race;
	_name_vehicles = name_vehicles;
	_speed_vehicles = speed_vehicles;
	_type_of_vehicles = type_of_vehicles;
}