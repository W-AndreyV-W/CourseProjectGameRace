#pragma once
#include "VehiclesInitial.h"

class Air :public VehiclesInitial {								//������� ����� ��������� ������������ ������� 
public:
	 ~Air();
protected:
	 Air(float distance_race, std::string name_vehicles, float speed_vehicles);
};