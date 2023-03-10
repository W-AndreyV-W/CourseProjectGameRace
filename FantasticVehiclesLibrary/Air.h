#pragma once
#include "VehiclesInitial.h"

class Air :public VehiclesInitial {								//Ѕазовый класс воздушных транспортных средств 
public:
	 ~Air();
protected:
	 Air(float distance_race, std::string name_vehicles, float speed_vehicles);
};