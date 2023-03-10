#pragma once
#include "VehiclesInitial.h"

class Air :public VehiclesInitial {								//	Базовый класс воздушных транспортных средств 
public:
	 ~Air();
protected:
	float coefficient();
	 Air(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient);
private:
	float _coefficient = 0;										//	Коэффициент сокращения расстояния
};