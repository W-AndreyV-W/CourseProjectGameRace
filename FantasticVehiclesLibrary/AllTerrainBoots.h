#pragma once
#include "Camel.h"

class AllTerrainBoots :public Camel {												//	�������� �� ��������
public:
	FantasticVehicles_API AllTerrainBoots(float distance_race) :Camel(distance_race, "�������-���������", 6, 60, 10, 5) {}
	~AllTerrainBoots();
protected:
	AllTerrainBoots(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_1, float duration_of_rest_subsequent);
};