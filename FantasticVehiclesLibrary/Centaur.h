#pragma once
#include "Ground.h"

class Centaur :public Ground {
public:
	FantasticVehicles_API Centaur(float distance_race) :Centaur(distance_race, "Кентавр", 15, 8, 2) {}
	FantasticVehicles_API float time() override;				//	Время прохождения трассы
	~Centaur();
protected:
	Centaur(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_subsequent);
};