#pragma once
#include "VehiclesInitial.h"

class Ground :public VehiclesInitial {						//	Базовый класс наземных транспортных средств
public:	
	~Ground();
protected:
	float number_of_stops();								//	Колличество остановок для отдыха
	float duration_of_rest_subsequent();					//	Возращение длительность отдыха все последующие разы
	Ground(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_subsequent);
private:
	float _driving_time = 0;								//	Время движение до остановки для отдыха
	float _duration_of_rest_subsequent = 0;					//	Длительность отдыха все последующие разы
};