#pragma once
#include "Air.h"

class Broomstick :public Air {
public:
	FantasticVehicles_API Broomstick(float distance_race) :Broomstick(distance_race, "Метла", 20, 1) {}
	FantasticVehicles_API float time() override;				//	Время прохождения трассы
	~Broomstick();
protected:
	Broomstick(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient);
};