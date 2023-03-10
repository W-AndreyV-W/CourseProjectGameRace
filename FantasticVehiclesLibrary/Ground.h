#pragma once
#include "VehiclesInitial.h"

class Ground :public VehiclesInitial {						//������� ����� �������� ������������ �������
public:	
	~Ground();
protected:
	float number_of_stops();								//����������� ��������� ��� ������
	Ground(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time);
private:
	float _driving_time = 0;								//����� �������� �� ��������� ��� ������
};