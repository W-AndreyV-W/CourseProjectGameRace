#pragma once
#include "VehiclesInitial.h"

class Air :public VehiclesInitial {								//	������� ����� ��������� ������������ ������� 
public:
	 ~Air();
protected:
	float coefficient();
	 Air(float distance_race, std::string name_vehicles, float speed_vehicles, float coefficient);
private:
	float _coefficient = 0;										//	����������� ���������� ����������
};