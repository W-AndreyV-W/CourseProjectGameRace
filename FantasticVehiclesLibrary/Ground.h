#pragma once
#include "VehiclesInitial.h"

class Ground :public VehiclesInitial {						//	������� ����� �������� ������������ �������
public:	
	~Ground();
protected:
	float number_of_stops();								//	����������� ��������� ��� ������
	float duration_of_rest_subsequent();					//	���������� ������������ ������ ��� ����������� ����
	Ground(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_subsequent);
private:
	float _driving_time = 0;								//	����� �������� �� ��������� ��� ������
	float _duration_of_rest_subsequent = 0;					//	������������ ������ ��� ����������� ����
};