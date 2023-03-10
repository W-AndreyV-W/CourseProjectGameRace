#pragma once
#include "Ground.h"

class CamelFast :public Ground {
public:
	FantasticVehicles_API CamelFast(float distance_race) :CamelFast(distance_race, "Верблюд-быстроход", 40, 10, 5, 6.5, 8) {}
	 FantasticVehicles_API float time() override;			//Время прохождения трассы
	~CamelFast();
protected:
	CamelFast(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_1, float duration_of_rest_2, float duration_of_rest_subsequent);
private:
	float _duration_of_rest_1 = 0;								//Длительность отдыха 1 раз
	float _duration_of_rest_2 = 0;								//Длительность отдыха 2 раз
	float _duration_of_rest_subsequent = 0;						//Длительность отдыха все последующие разы
};