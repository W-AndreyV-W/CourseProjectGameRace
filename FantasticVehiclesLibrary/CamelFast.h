#pragma once
#include "Ground.h"

class CamelFast :public Ground {
public:
	FantasticVehicles_API CamelFast(float distance_race) :CamelFast(distance_race, "�������-���������", 40, 10, 5, 6.5, 8) {}
	 FantasticVehicles_API float time() override;			//����� ����������� ������
	~CamelFast();
protected:
	CamelFast(float distance_race, std::string name_vehicles, float speed_vehicles, float driving_time, float duration_of_rest_1, float duration_of_rest_2, float duration_of_rest_subsequent);
private:
	float _duration_of_rest_1 = 0;								//������������ ������ 1 ���
	float _duration_of_rest_2 = 0;								//������������ ������ 2 ���
	float _duration_of_rest_subsequent = 0;						//������������ ������ ��� ����������� ����
};