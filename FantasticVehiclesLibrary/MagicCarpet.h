#pragma once
#include "Air.h"

class MagicCarpet :public Air {
public:
	FantasticVehicles_API MagicCarpet(float distance_race) :MagicCarpet(distance_race, "����-������", 10, 0, 3, 10, 5) {}
	 FantasticVehicles_API float time() override;					//����� ����������� ������
	~MagicCarpet();
protected:
	MagicCarpet(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient_1000, float coefficient_5000, float coefficient_10000, float coefficient);
	
private:
	float _coefficient_1000 = 0;										//����������� ���������� ���������� �� 1000
	float _coefficient_5000 = 0;										//����������� ���������� ���������� �� 5000
	float _coefficient_10000 = 0;										//����������� ���������� ���������� �� 10000
	float _coefficient = 0;												//����������� ���������� ���������� �� 10000
};