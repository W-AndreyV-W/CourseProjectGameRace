#pragma once
#include "Air.h"

class Eagle :public Air {
public:
	FantasticVehicles_API Eagle(float distance_race) :Eagle(distance_race, "���", 8, 6) {}
	FantasticVehicles_API float time() override;			//����� ����������� ������
	~Eagle();
protected:
	Eagle(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient);
private:
	float _coefficient = 0;										//����������� ���������� ����������
};