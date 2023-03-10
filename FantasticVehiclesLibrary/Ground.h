#pragma once
#include "VehiclesInitial.h"

class Ground :public VehiclesInitial {						//Базовый класс наземных транспортных средств
public:	
	~Ground();
protected:
	float number_of_stops();								//Колличество остановок для отдыха
	Ground(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time);
private:
	float _driving_time = 0;								//Время движение до остановки для отдыха
};