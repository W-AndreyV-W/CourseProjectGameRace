#pragma once
#include "Ground.h"

class Camel :public Ground{
public:
	FantasticVehicles_API Camel(float distance_race) :Camel(distance_race, "�������", 10, 30, 5, 8){}
	 FantasticVehicles_API float time() override;			//����� ����������� ������
	~Camel();
protected:
	Camel(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_1, float duration_of_rest_subsequent);
private:
	float _duration_of_rest_1 =0;								//������������ ������ ������ ���
	float _duration_of_rest_subsequent = 0;						//������������ ������ ��� ����������� ����
};